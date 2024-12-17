#include "bench.h"


#define FIVE ONE ONE ONE ONE ONE
#define TEN FIVE FIVE
#define FIFTY TEN TEN TEN TEN TEN
#define HUNDRED FIFTY FIFTY
#define FHUNDRED HUNDRED HUNDRED HUNDRED HUNDRED HUNDRED
#define THOUSAND FHUNDRED FHUNDRED
#define FTHOUSAND THOUSAND THOUSAND THOUSAND THOUSAND THOUSAND
#define TENTHOUSAND FTHOUSAND FTHOUSAND

#ifndef __INNER_COUNT
#define __INNER_COUNT 100ULL
#endif

#ifndef __LOOP_COUNT
#define __LOOP_COUNT 1000000ULL
#endif

// ===================== Pointer Chasing =====================
void __attribute__((noinline)) ptchase(uint64_t cnt, uint64_t *loadbase) {
#undef ONE
#define ONE "ld %1, 0(%1)\n\t" 
    asm volatile(
        ".align 8\n\t"
        "1:\n\t"
        HUNDRED     
        "addi %0, %0, -1\n\t"
        "bnez %0, 1b\n\t"
        : "+r"(cnt), "+r"(loadbase)
        : 
        : "memory");
}

void ptchase_test(double freq) {
    uint64_t foo[10];
    foo[0] = (uint64_t)foo;  // 指针指向自身

    ptchase(10000, foo); 

    double begin = second();
    ptchase(__LOOP_COUNT, foo);
    double end = second();

    double f = 1.0e9 * (end - begin) * freq / (__LOOP_COUNT * __INNER_COUNT);
    printf("Pointer chasing latency: %f cycles\n", f);
}

// ===================== No Pointer Chasing =====================
void __attribute__((noinline)) noptchase(uint64_t cnt, uint64_t *storebase) {
#undef ONE
#define ONE "ld t0, 0(%1)\n\t" \
            "add %1, %1, t0\n\t"
    asm volatile(
        ".align 8\n\t"
        "1:\n\t"
        FIFTY
        "addi %0, %0, -1\n\t"
        "bnez %0, 1b\n\t"
        : "+r"(cnt), "+r"(storebase)
        : 
        : "t0", "memory");
}

void noptchase_test(double freq) {
    uint64_t foo[10];
    foo[0] = 0;

    noptchase(10000, foo); 

    double begin = second();
    noptchase(__LOOP_COUNT, foo);
    double end = second();

    double f = 1.0e9 * (end - begin) * freq / (__LOOP_COUNT * __INNER_COUNT /2);
    printf("No pointer chasing latency: %f cycles\n", f);
}

// ===================== 主函数 =====================
int main() {
    double freq = CPU_FREQ;
    ptchase_test(freq);
    noptchase_test(freq);
    return 0;
}
