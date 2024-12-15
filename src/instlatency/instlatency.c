#include <klib.h>
#include <klib-macros.h>



#define FIVE ONE ONE ONE ONE ONE
#define TEN FIVE FIVE
#define FIFTY TEN TEN TEN TEN TEN
#define HUNDRED FIFTY FIFTY
#define FHUNDRED HUNDRED HUNDRED HUNDRED HUNDRED HUNDRED
#define THOUSAND FHUNDRED FHUNDRED

#define FTHOUSAND THOUSAND THOUSAND THOUSAND THOUSAND THOUSAND
#define TENTHOUSAND FTHOUSAND FTHOUSAND

// 定义内循环和外循环计数
#ifndef __INNER_COUNT
#define __INNER_COUNT 100ULL
#endif

#ifndef __LOOP_COUNT
#define __LOOP_COUNT 1000000ULL
#endif


static inline double second() {
    return (double)uptime() / 1000.0; // 将毫秒转为秒
}

// =================== Integer Multiplication Latency(指令之间有依赖) ===================
void __attribute__((noinline)) mullat(uint64_t cnt) {
    #undef ONE
    #define ONE "mul x8, x8, x8\n\t" // RISC-V 整数乘法指令

    asm volatile(
        ".align 8\n\t"        
        "1:\n\t"
        HUNDRED              
        "addi %0, %0, -1\n\t" 
        "bnez %0, 1b\n\t"    
        : "+r"(cnt)           
        :                    
        : "x8", "x9", "x10", "x11", "x12", "x13", "x14", "x15"
    );
}

void mullat_test(double freq) {
    mullat(10000);                    
    double begin = second();          
    mullat(__LOOP_COUNT);             
    double end = second();            
    double f = 1.0e9 * (end - begin) * freq / (__LOOP_COUNT * __INNER_COUNT);
    printf("Mul latency: %f cycles\n", f);
}

// =================== Integer Multiplication Bandwidth(指令之间无依赖) ===================
void __attribute__ ((noinline)) mulbw(uint64_t cnt) {
#undef ONE
#define ONE \
    "mul x8, x9, x10   \n\t" \
    "mul x11, x12, x13 \n\t" \
    "mul x14, x15, x16 \n\t" \
    "mul x17, x18, x19 \n\t" \
    "mul x20, x21, x22 \n\t" \
    "mul x23, x24, x25 \n\t" \
    "mul x26, x27, x28 \n\t" \
    "mul x29, x30, x31 \n\t"

    asm volatile(
        ".align 8\n\t"         
        "1:\n\t"
        HUNDRED                
        "addi %0, %0, -1\n\t"  
        "bnez %0, 1b\n\t"      
        : "+r"(cnt)            
        :                      
        : "x8", "x9", "x10", "x11", "x12", "x13", "x14", "x15", 
          "x16", "x17", "x18", "x19", "x20", "x21", "x22", "x23", 
          "x24", "x25", "x26", "x27", "x28", "x29", "x30", "x31", 
          "memory"             
    );
}


void mulbw_test(double freq) {
    mulbw(10000);                     
    double begin = second();          
    mulbw(__LOOP_COUNT);              
    double end = second();            
    double f = (__LOOP_COUNT * __INNER_COUNT * 8) / 1.0e9 / (end - begin) / freq;
    printf("Mul bandwidth: %f ops/cycle\n", f);
}

// ===================== Unsigned Division Latency ============================
void __attribute__ ((noinline)) udivlat(uint64_t cnt) {
#undef ONE
#define ONE \
    "divu t3, t1, t2\n\t" \
    "add t2, t2, t3\n\t" \
    "sub t2, t2, t3\n\t"

    asm volatile(
        ".align 8\n\t"
        "li t1, 0\n\t"       // t1 被除数
        "addi t1, t1, -1\n\t"  
        "li t2, 3\n\t"       // t2 = 3, 除数
        "1:\n\t"
        ONE                 //除法后制造依赖并恢复值防止乱序执行
        "addi %0, %0, -1\n\t"  
        "bnez %0, 1b\n\t"      
        : "+r"(cnt)            
        :                     
        : "t1", "t2", "t3", "memory" 
    );
}



void udivlat_test(double freq) {
    udivlat(10000);
    double begin = second();
    udivlat(__LOOP_COUNT);
    double end = second();
    double f = 1.0e9 * (end - begin) * freq / __LOOP_COUNT - 2;
    printf("Unsigned Div latency: %f cycles\n", f);
}

// ===================== Signed Division Latency ==============================
void __attribute__ ((noinline)) sdivlat(uint64_t cnt) {
#undef ONE
#define ONE \
    "div t3, t1, t2\n\t" \
    "add t2, t2, t3\n\t" \
    "sub t2, t2, t3\n\t"

    asm volatile(
        ".align 8\n\t"
        "li t1, 0\n\t"      
        "addi t1, t1, -1\n\t"  
        "li t2, 3\n\t"       
        "1:\n\t"    
        ONE
        "addi %0, %0, -1\n\t" 
        "bnez %0, 1b\n\t"
        :
        : "r"(cnt)
        : "t1", "t2", "t3", "memory" 
    );
}


void sdivlat_test(double freq) {
    sdivlat(10000);
    double begin = second();
    sdivlat(__LOOP_COUNT);
    double end = second();
    double f = 1.0e9 * (end - begin) * freq / __LOOP_COUNT - 2 ;
    printf("Signed Div latency: %f cycles\n", f);
}

// ===================== Unsigned Division Bandwidth ==========================
void __attribute__((noinline)) udivbw(uint64_t cnt) {
    #undef ONE
    #define ONE \
        "divu x8, x9, x10\n\t" \
        "divu x11, x12, x13\n\t" \
        "divu x14, x15, x16\n\t" \
        "divu x17, x18, x19\n\t" \
        "divu x20, x21, x22\n\t" \
        "divu x23, x24, x25 \n\t" \
        "divu x26, x27, x28 \n\t" \
        "divu x29, x30, x31 \n\t"

    asm volatile(
        ".align 8\n\t"
        "li x10, 3\n\t"       
        "li x13, 3\n\t"       
        "li x16, 3\n\t"       
        "li x19, 3\n\t"       
        "li x22, 3\n\t"       
        "li x25, 3\n\t"       
        "li x28, 3\n\t"       
        "li x31, 3\n\t"       
        "1:\n\t"
        HUNDRED
        "addi %0, %0, -1\n\t"
        "bnez %0, 1b\n\t"
        : "+r"(cnt)
        :
        : "x8", "x9", "x10", "x11", "x12", "x13", "x14", "x15", 
          "x16", "x17", "x18", "x19", "x20", "x21", "x22", "x23", 
          "x24", "x25", "x26", "x27", "x28", "x29", "x30", "x31", 
          "memory" 
    );
}

void udivbw_test(double freq) {
    udivbw(10000);
    double begin = second();
    udivbw(__LOOP_COUNT);
    double end = second();
    double f = (__LOOP_COUNT * __INNER_COUNT * 8) / 1.0e9 / (end - begin) / freq;
    printf("Unsigned Div bandwidth: %f ops/cycle\n", f);
}

// ===================== Floating-point Add Latency ============================
void __attribute__((noinline)) faddlat(uint64_t cnt) {
    #undef ONE
    #define ONE "fadd.d f8, f8, f8\n\t"
    asm volatile(
        ".align 8\n\t"
        "1:\n\t"
        HUNDRED
        "addi %0, %0, -1\n\t"
        "bnez %0, 1b\n\t"
        : "+r"(cnt)
        :
        : "f8", "memory"
    );
}

void faddlat_test(double freq) {
    faddlat(10000);
    double begin = second();
    faddlat(__LOOP_COUNT);
    double end = second();
    double f = 1.0e9 * (end - begin) * freq / (__LOOP_COUNT * __INNER_COUNT);
    printf("FAdd latency: %f cycles\n", f);
}

// ===================== Floating-point Add Bandwidth =========================
void __attribute__((noinline)) faddbw(uint64_t cnt) {
    #undef ONE
    #define ONE \
        "fadd.d f8, f9, f10\n\t" \
        "fadd.d f11, f12, f13\n\t" \
        "fadd.d f14, f15, f16\n\t" \
        "fadd.d f17, f18, f19\n\t" \
        "fadd.d f20, f21, f22\n\t" \
        "fadd.d f23, f24, f25 \n\t" \
        "fadd.d f26, f27, f28 \n\t" \
        "fadd.d f29, f30, f31 \n\t"

    asm volatile(
        ".align 8\n\t"
        "1:\n\t"
        TEN
        "addi %0, %0, -1\n\t"
        "bnez %0, 1b\n\t"
        : "+r"(cnt)
        :
        : "f8", "f9", "f10", "f11", "f12", "f13", "f14", "f15", 
          "f16", "f17", "f18", "f19", "f20", "f21", "f22", "f23", 
          "f24", "f25", "f26", "f27", "f28", "f29", "f30", "f31", 
          "memory" 
    );
}

void faddbw_test(double freq) {
    faddbw(10000);
    double begin = second();
    faddbw(__LOOP_COUNT);
    double end = second();
    double f = (__LOOP_COUNT * __INNER_COUNT /10 * 8) / 1.0e9 / (end - begin) / freq;
    printf("FAdd bandwidth: %f ops/cycle\n", f);
}

// ===================== Floating-point Multiply-add Latency ==================
void __attribute__((noinline)) fmalat(uint64_t cnt) {
    #undef ONE
    #define ONE "fmadd.d f8, f8, f8, f10\n\t"
    asm volatile(
        ".align 8\n\t"
        "1:\n\t"
        HUNDRED
        "addi %0, %0, -1\n\t"
        "bnez %0, 1b\n\t"
        : "+r"(cnt)
        :
        : "f8", "f9", "f10", "memory"
    );
}

void fmalat_test(double freq) {
    fmalat(10000);
    double begin = second();
    fmalat(__LOOP_COUNT);
    double end = second();
    double f = 1.0e9 * (end - begin) * freq / (__LOOP_COUNT * __INNER_COUNT);
    printf("FMAdd latency: %f cycles\n", f);
}

// ===================== Floating-point Multiply-add Bandwidth =================
void __attribute__ ((noinline)) fmabw(uint64_t cnt) {
#undef ONE
#define ONE \
    "fmadd.d f0, f0, f1, f2\n\t" \
    "fmadd.d f3, f3, f4, f5\n\t" \
    "fmadd.d f6, f6, f7, f8\n\t" \
    "fmadd.d f9, f9, f10, f11\n\t" \
    "fmadd.d f12, f12, f13, f14\n\t" \
    "fmadd.d f15, f15, f16, f17\n\t" \
    "fmadd.d f18, f18, f19, f20\n\t" \
    "fmadd.d f21, f21, f22, f23\n\t" \
    "fmadd.d f24, f24, f25, f26\n\t" \
    "fmadd.d f27, f27, f28, f29\n\t"

    asm volatile(
        ".align 4\n\t"
        "1:\n\t"
        TEN
        "addi %0, %0, -1\n\t"
        "bnez %0, 1b\n\t"
        : "+r"(cnt)
        :
        : "f0", "f1", "f2", "f3", "f4", "f5", "f6", "f7",
          "f8", "f9", "f10", "f11", "f12", "f13", "f14", "f15",
          "f16", "f17", "f18", "f19", "f20", "f21", "f22", "f23",
          "f24", "f25", "f26", "f27", "f28", "f29", "memory");
}



void fmabw_test(double freq) {
    fmabw(10000);
    double begin = second();
    fmabw(__LOOP_COUNT);
    double end = second();
    double f = (__LOOP_COUNT * __INNER_COUNT) / 1.0e9 / (end - begin) / freq;
    printf("FMA bandwidth: %f ops/cycle\n", f);
}
// ===================== Floating-point Multiply Latency =======================
void __attribute__((noinline)) fmullat(uint64_t cnt) {
    #undef ONE
    #define ONE "fmul.d f0, f0, f0\n\t"
    asm volatile(
        ".align 8\n\t"
        "1:\n\t"
        HUNDRED
        "addi %0, %0, -1\n\t"
        "bnez %0, 1b\n\t"
        : "+r"(cnt)
        :
        : "f0", "f1", "f2", "f3", "f4", "f5", "f6", "f7", "memory"
    );
}

void fmullat_test(double freq) {
    fmullat(10000);
    double begin = second();
    fmullat(__LOOP_COUNT);
    double end = second();
    double f = 1.0e9 * (end - begin) * freq / (__LOOP_COUNT * __INNER_COUNT);
    printf("FMul latency: %f cycles\n", f);
}

// ===================== Floating-point Multiply Bandwidth =====================
void __attribute__ ((noinline)) fmulbw(uint64_t cnt) {
#undef ONE
#define ONE "fmul.s f0, f1, f2\n\t" \
            "fmul.s f3, f4, f5\n\t" \
            "fmul.s f6, f7, f8\n\t" \
            "fmul.s f9, f10, f11\n\t" \
            "fmul.s f12, f13, f14\n\t" \
            "fmul.s f15, f16, f17\n\t" \
            "fmul.s f18, f19, f20\n\t" \
            "fmul.s f21, f22, f23\n\t"

    asm volatile(
        ".align 8\n\t"         
        "1:\n\t"
        HUNDRED                
        "addi %0, %0, -1\n\t"  
        "bnez %0, 1b\n\t"     
        : "+r"(cnt)
        :
        : "f0", "f1", "f2", "f3", "f4", "f5", "f6", "f7", "f8", "f9",
          "f10", "f11", "f12", "f13", "f14", "f15", "f16", "f17", "f18", 
          "f19", "f20", "f21", "f22", "f23");
}


void fmulbw_test(double freq) {
    fmulbw(10000);
    double begin = second();
    fmulbw(__LOOP_COUNT);
    double end = second();
    double f = (__LOOP_COUNT * __INNER_COUNT * 8) / 1.0e9 / (end - begin) / freq;
    printf("FMul bandwidth: %f ops/cycle\n", f);
}

// ===================== Floating-point Division Latency =======================
void __attribute__((noinline)) fdivlat(uint64_t cnt) {
    #undef ONE
    #define ONE \
        "fdiv.s f3, f1, f2\n\t" \
        "fadd.s f1, f3, f1\n\t" \
        "fsub.s f1, f3, f1\n\t"
        
    asm volatile(
        ".align 8\n\t"
        "li t0, 0\n\t"
        "addi t0, t0, -1\n\t"
        "fmv.w.x f1, t0\n\t" // Load 3（整数） into f1（浮点）
        "li t1, 1\n\t"
        "fmv.w.x f2, t1\n\t" // Load 1 into f2
        "1:\n\t"
        HUNDRED
        "addi %0, %0, -1\n\t"
        "bnez %0, 1b\n\t"
        : "+r"(cnt)
        :
        : "f1", "f2", "f3", "t0", "t1", "memory"
    );
}

void fdivlat_test(double freq) {
    fdivlat(10000);
    double begin = second();
    fdivlat(__LOOP_COUNT);
    double end = second();
    double f = 1.0e9 * (end - begin) * freq / (__LOOP_COUNT * __INNER_COUNT);
    printf("FDiv latency: %f cycles\n", f);
}

// ===================== Floating-point Divide Bandwidth =========================
void __attribute__((noinline)) fdivbw(uint64_t cnt) {
    #undef ONE
    #define ONE "fdiv.s f0, f1, f2\n\t"

    asm volatile(
        ".align 8\n\t"
        "li t0, 0\n\t"    
        "addi t0, t0, -1\n\t"      
        "fcvt.s.w f1, t0\n\t"   // 将整数 t0 转换为单精度浮点数存入 f1
        "li t1, 3\n\t"          
        "fcvt.s.w f2, t1\n\t"   // 将整数 t1 转换为单精度浮点数存入 f2
        "1:\n\t"
        HUNDRED                 
        "addi %0, %0, -1\n\t"   
        "bnez %0, 1b\n\t"       
        : "+r"(cnt)
        :
        : "t0", "t1", "f0", "f1", "f2", "memory"
    );
}

void fdivbw_test(double freq) {
    fdivbw(10000);                  
    double begin = second();        
    fdivbw(__LOOP_COUNT);           
    double end = second();         
    double f = (__LOOP_COUNT * __INNER_COUNT) / 1.0e9 / (end - begin) / freq;
    printf("Fdiv bandwidth: %f ops/cycle\n", f);
}

// ===================== Floating-point Square Root Latency ====================
void __attribute__((noinline)) fsqrtlat(uint64_t cnt) {
    #undef ONE
    #define ONE "fsqrt.d f8, f8\n\t"
    asm volatile(
        "li t0, 0x400921FB54442D18\n\t"  /* π 的 IEEE 754 表示（双精度浮点数）*/ 
        "fmv.d.x f8, t0\n\t"             
        ".align 3\n\t"
        "1:\n\t"
        TEN
        "addi %0, %0, -1\n\t"
        "bnez %0, 1b\n\t"
        : "+r"(cnt)
        :
        : "f8", "memory"
    );
}

void fsqrtlat_test(double freq) {
    fsqrtlat(10000);
    double begin = second();
    fsqrtlat(__LOOP_COUNT);
    double end = second();
    double f = 1.0e9 * (end - begin) * freq / (__LOOP_COUNT * __INNER_COUNT / 10);
    printf("FSqrt latency: %f cycles\n", f);
}



// =================== Main Function ===================
int main() {
    double freq = 0.000225; // 根据实际硬件频率设置
    // mullat_test(freq);
    // mulbw_test(freq);
    // udivlat_test(freq);
    // sdivlat_test(freq);
    // udivbw_test(freq);
    faddlat_test(freq);
    // faddbw_test(freq);
    // fmalat_test(freq);
    // fmabw_test(freq);       //需要向量扩展
    // fmullat_test(freq);
    // fmulbw_test(freq);
    // fdivlat_test(freq);
    // fdivbw_test(freq);
    // fsqrtlat_test(freq);
    return 0;
}
