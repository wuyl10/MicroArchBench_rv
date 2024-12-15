#include <klib.h>      
#include <klib-macros.h>      
#include <printf.h>      


// 对齐与循环计数常量
#ifndef __INNER_COUNT
#define __INNER_COUNT 100ULL
#endif

#ifndef __LOOP_COUNT
#define __LOOP_COUNT 10000ULL
#endif

// 定义CPU频率 (GHz) ，根据实际情况修改
#define CPU_FREQ (0.000250)


#define FIVE ONE ONE ONE ONE ONE
#define TEN FIVE FIVE
#define FIFTY TEN TEN TEN TEN TEN
#define HUNDRED FIFTY FIFTY
#define FHUNDRED HUNDRED HUNDRED HUNDRED HUNDRED HUNDRED
#define THOUSAND FHUNDRED FHUNDRED

// 获取当前时间（秒）
static inline double second() {
  // uptime() 返回毫秒数，转为秒
  return (double)uptime() / 1000.0;
}


//====================== ALU width ======================
void __attribute__ ((noinline)) aluwidth(uint64_t cnt) {
  #undef ONE
  #define ONE \
    "add x8, x8, x18\n\t" \
    "add x9, x9, x18\n\t" \
    "add x10, x10, x18\n\t" \
    "add x11, x11, x18\n\t" \
    "add x12, x12, x18\n\t" \
    "add x13, x13, x18\n\t" \
    "add x14, x14, x18\n\t" \
    "add x15, x15, x18\n\t"

  asm volatile(
    ".align 8\n\t"
    "1:\n\t"
    HUNDRED
    "addi %0, %0, -1\n\t"
    "bnez %0, 1b\n\t"
    : "+r"(cnt)
    :
    : "x8","x9","x10","x11","x12","x13","x14","x15","x18"
  );
}

void aluwidth_test(double freq) {
  aluwidth(3000);
  double begin = second();
  aluwidth(__LOOP_COUNT);
  double end = second();
  double f = (__LOOP_COUNT * __INNER_COUNT * 8) / 1.0e9 / (end - begin) / freq;
  printf("ALU width: %f\n", f);
}

//====================== Nop width ======================
void __attribute__ ((noinline)) nopwidth(uint64_t cnt){
  #undef ONE
  #define ONE "nop \n\t"
  asm volatile(
    ".align 8\n\t"
    "1:\n\t"
    HUNDRED
    "addi %0, %0, -1\n\t"
    "bnez %0, 1b\n\t"
    : "+r"(cnt)
    :
    : "x8","x9","memory"
  );
}

void nopwidth_test(double freq) {
  nopwidth(3000);
  double begin = second();
  nopwidth(__LOOP_COUNT);
  double end = second();
  double f = (__LOOP_COUNT * __INNER_COUNT) / 1.0e9 / (end - begin) / freq;
  printf("Nop width: %f\n", f);
}

// =================== BR Width ===================
void __attribute__ ((noinline)) brwidth(uint64_t cnt){
  #undef ONE
  #define ONE "beq x1, x0, 1b\n\t"
  asm volatile(
    ".align 3\n\t"
    "1:\n\t"
    "addi x1, x1, 1\n\t"
    HUNDRED
    "addi %0, %0, -1\n\t"
    "bnez %0, 1b\n\t"
    : "+r"(cnt)
    :
    : "x1","memory"
  );
}

void brwidth_test(double freq) {
  brwidth(3000);
  double begin = second();
  brwidth(__LOOP_COUNT);
  double end = second();
  double f = (__LOOP_COUNT * __INNER_COUNT) / 1.0e9 / (end - begin) / freq;
  printf("BRU width: %f\n", f);
}

// =================== FPU Width ===================
void __attribute__ ((noinline)) fpuwidth(uint64_t cnt){
  #undef ONE
  #define ONE \
    "fadd.d f2, f0, f1\n\t" \
    "fadd.d f3, f0, f1\n\t" \
    "fadd.d f4, f0, f1\n\t" \
    "fadd.d f5, f0, f1\n\t" \
    "fadd.d f6, f0, f1\n\t" \
    "fadd.d f7, f0, f1\n\t" \
    "fadd.d f8, f0, f1\n\t" \
    "fadd.d f9, f0, f1\n\t"

  asm volatile(
    ".align 8\n\t"
    "1:\n\t"
    HUNDRED
    "addi %0, %0, -1\n\t"
    "bnez %0, 1b\n\t"
    : "+r"(cnt)
    :
    : "f2","f3","f4","f5","f6","f7","f8","f9","memory"
  );
}

void fpuwidth_test(double freq) {
  fpuwidth(3000);
  double begin = second();
  fpuwidth(__LOOP_COUNT);
  double end = second();
  double f = (__LOOP_COUNT * __INNER_COUNT * 8) / 1.0e9 / (end - begin) / freq;
  printf("FPU width: %f\n", f);
}

// =================== Rename Width ===================
void __attribute__ ((noinline)) renamewidth(uint64_t cnt){
  #undef ONE
  #define ONE \
    "fadd.d f2, f0, f1\n\t" \
    "add x9, x9, x10\n\t" \
    "add x10, x10, x11\n\t" \
    "fadd.d f3, f0, f1\n\t" \
    "add x11, x11, x12\n\t" \
    "add x12, x12, x13\n\t" \
    "fadd.d f4, f0, f1\n\t" \
    "add x13, x13, x14\n\t" \
    "add x14, x14, x15\n\t"

  asm volatile(
    ".align 8\n\t"
    "1:\n\t"
    TEN ONE
    "addi %0, %0, -1\n\t"
    "bnez %0, 1b\n\t"
    : "+r"(cnt)
    :
    : "x9","x10","x11","x12","x13","x14","x15","f2","f3","f4","memory"
  );
}

void renamewidth_test(double freq) {
  renamewidth(3000);
  double begin = second();
  renamewidth(__LOOP_COUNT);
  double end = second();
  double f = (__LOOP_COUNT * __INNER_COUNT) / 1.0e9 / (end - begin) / freq;
  printf("Rename width: %f\n", f);
}

// =================== Load Width ===================
void __attribute__ ((noinline)) loadwidth(uint64_t cnt, uint64_t* loadbase){
  #undef ONE
  #define ONE \
    "ld x9, 0(%1)\n\t" \
    "ld x10, 8(%1)\n\t" \
    "ld x11, 16(%1)\n\t" \
    "ld x12, 24(%1)\n\t"

  asm volatile(
    ".align 3\n\t"
    "1:\n\t"
    TEN TEN FIVE
    "addi %0, %0, -1\n\t"
    "bnez %0, 1b\n\t"
    : "+r"(cnt)
    : "r"(loadbase)
    : "x9", "x10", "x11", "x12", "memory"
  );
}

void loadwidth_test(double freq) {
  uint64_t data[10];
  loadwidth(3000, data);
  double begin = second();
  loadwidth(__LOOP_COUNT, data);
  double end = second();
  double f = (__LOOP_COUNT * __INNER_COUNT) / 1.0e9 / (end - begin) / freq;
  printf("Load width: %f\n", f);
}

// =================== Store Width ===================
void __attribute__ ((noinline)) storewidth(uint64_t cnt, uint64_t* storebase){
  #undef ONE
  #define ONE \
    "sd x9, 0(%1)\n\t" \
    "sd x10, 8(%1)\n\t" \
    "sd x11, 16(%1)\n\t" \
    "sd x12, 24(%1)\n\t"

  asm volatile(
    ".align 4\n\t"
    "1:\n\t"
    TEN TEN FIVE
    "addi %0, %0, -1\n\t"
    "bnez %0, 1b\n\t"
    : "+r"(cnt)
    : "r"(storebase)
    : "x9", "x10", "x11", "x12", "memory"
  );
}

void storewidth_test(double freq) {
  uint64_t data[10];
  storewidth(3000, data);
  double begin = second();
  storewidth(__LOOP_COUNT, data);
  double end = second();
  double f = (__LOOP_COUNT * __INNER_COUNT) / 1.0e9 / (end - begin) / freq;
  printf("Store width: %f\n", f);
}

// =================== agu Width ===================
void __attribute__ ((noinline)) aguwidth(uint64_t cnt, uint64_t* storebase, uint64_t* loadbase) {
  #undef ONE
  #define ONE \
      "sw x9, 0(%1)\n\t" \
      "lw x10, 0(%2)\n\t" \
      "sw x9, 0(%1)\n\t" \
      "lw x10, 0(%2)\n\t" \
      "sw x9, 0(%1)\n\t" \
      "lw x10, 0(%2)\n\t" \
      "sw x9, 0(%1)\n\t" \
      "lw x10, 0(%2)\n\t"
  
  asm volatile(
    ".align 3\n\t"
    "1:\n\t"
    TEN TEN FIVE
    "addi %0, %0, -1\n\t"  
    "bnez %0, 1b\n\t"      
    :
    : "r"(cnt), "r"(storebase), "r"(loadbase)
    : "x9", "x10", "memory"
  );
}


void aguwidth_test(double freq) {
  uint64_t data0[10];
  uint64_t data1[10];
  aguwidth(3000,data0,data1);
  double begin = second();
  aguwidth(__LOOP_COUNT,data0,data1);
  double end = second();
  double f = (__LOOP_COUNT * __INNER_COUNT * 2) / 1.0e9 / (end - begin) / freq;
  printf("AGU width: %f\n", f);
}


// =================== Main Function ===================
int main() {
  double freq = CPU_FREQ;

  aluwidth_test(freq);
  nopwidth_test(freq);
  brwidth_test(freq);
  fpuwidth_test(freq);
  renamewidth_test(freq);
  loadwidth_test(freq);
  storewidth_test(freq);
  aguwidth_test(freq);
  return 0;
}

