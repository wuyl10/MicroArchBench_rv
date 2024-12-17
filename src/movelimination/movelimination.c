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
#define __LOOP_COUNT 5000ULL
#endif

void __attribute__ ((noinline)) mov_imm_zero(uint64_t cnt) {
#undef ONE
#define ONE \
    "li t0, 0\n\t" \
    "li t1, 0\n\t" \
    "li t2, 0\n\t" \
    "li t3, 0\n\t" \
    "li t4, 0\n\t" \
    "li t5, 0\n\t" \
    "li t6, 0\n\t" 

    asm volatile(
        ".align 8\n\t"
        "1:\n\t"
        HUNDRED
        "addi %0, %0, -1\n\t"
        "bnez %0, 1b\n\t"
        : "+r"(cnt)
        :
        : "t0", "t1", "t2", "t3", "t4", "t5", "t6");
}

void mov_imm_zero_test(double freq) {
    mov_imm_zero(10000);
    double begin = second();
    mov_imm_zero(__LOOP_COUNT);
    double end = second();
    double f = (__LOOP_COUNT * __INNER_COUNT * 7) / 1.0e9 / (end - begin) / freq;
    printf("Mov imm zero: %f ops/cycle\n", f);
}

void __attribute__ ((noinline)) mov_imm_one(uint64_t cnt) {
#undef ONE
#define ONE \
    "li t0, 1\n\t" \
    "li t1, 1\n\t" \
    "li t2, 1\n\t" \
    "li t3, 1\n\t" \
    "li t4, 1\n\t" \
    "li t5, 1\n\t" \
    "li t6, 1\n\t"

    asm volatile(
        ".align 8\n\t"
        "1:\n\t"
        HUNDRED
        "addi %0, %0, -1\n\t"
        "bnez %0, 1b\n\t"
        : "+r"(cnt)
        :
        : "t0", "t1", "t2", "t3", "t4", "t5", "t6");
}

void mov_imm_one_test(double freq) {
    mov_imm_one(10000);
    double begin = second();
    mov_imm_one(__LOOP_COUNT);
    double end = second();
    double f = (__LOOP_COUNT * __INNER_COUNT * 7) / 1.0e9 / (end - begin) / freq;
    printf("Mov imm one: %f ops/cycle\n", f);
}


void __attribute__ ((noinline)) mov_chain(uint64_t cnt) {
#undef ONE
#define ONE \
    "mv t1, t0\n\t" \
    "mv t2, t1\n\t" \
    "mv t3, t2\n\t" \
    "mv t4, t3\n\t" \
    "mv t5, t4\n\t" \
    "mv t6, t5\n\t" \
    "mv t0, t6\n\t"

    asm volatile(
        ".align 8\n\t"
        "1:\n\t"
        HUNDRED
        "addi %0, %0, -1\n\t"
        "bnez %0, 1b\n\t"
        : "+r"(cnt)
        :
        : "t0", "t1", "t2", "t3", "t4", "t5", "t6");
}

void mov_chain_test(double freq) {
    mov_chain(10000);
    double begin = second();
    mov_chain(__LOOP_COUNT);
    double end = second();
    double f = (__LOOP_COUNT * __INNER_COUNT * 7) / 1.0e9 / (end - begin) / freq;
    printf("Mov chain: %f ops/cycle\n", f);
}

void __attribute__ ((noinline)) mov_single(uint64_t cnt) {
#undef ONE
#define ONE \
    "mv t0, a0\n\t" \
    "mv t1, a0\n\t" \
    "mv t2, a0\n\t" \
    "mv t3, a0\n\t" \
    "mv t4, a0\n\t" \
    "mv t5, a0\n\t" \
    "mv t6, a0\n\t"

    asm volatile(
        ".align 8\n\t"
        "1:\n\t"
        HUNDRED
        "addi %0, %0, -1\n\t"
        "bnez %0, 1b\n\t"
        : "+r"(cnt)
        :
        : "t0", "t1", "t2", "t3", "t4", "t5", "t6", "a0");
}

void mov_single_test(double freq) {
    mov_single(10000);
    double begin = second();
    mov_single(__LOOP_COUNT);
    double end = second();
    double f = (__LOOP_COUNT * __INNER_COUNT * 7) / 1.0e9 / (end - begin) / freq;
    printf("Mov single: %f ops/cycle\n", f);
}

void __attribute__ ((noinline)) fmov_single(uint64_t cnt) {
#undef ONE
#define ONE \
    "fmv.d f4, f0\n\t" \
    "fmv.d f5, f0\n\t" \
    "fmv.d f6, f0\n\t" \
    "fmv.d f7, f0\n\t" \
    "fmv.d f8, f0\n\t" \
    "fmv.d f9, f0\n\t" \
    "fmv.d f10, f0\n\t"

    asm volatile(
        ".align 8\n\t"
        "1:\n\t"
        HUNDRED
        "addi %0, %0, -1\n\t"
        "bnez %0, 1b\n\t"
        : "+r"(cnt)
        :
        : "f4", "f5", "f6", "f7", "f8", "f9", "f10", "f0");
}

void fmov_single_test(double freq) {
    fmov_single(10000);
    double begin = second();
    fmov_single(__LOOP_COUNT);
    double end = second();
    double f = (__LOOP_COUNT * __INNER_COUNT * 7) / 1.0e9 / (end - begin) / freq;
    printf("Fmov single: %f ops/cycle\n", f);
}


void __attribute__ ((noinline)) mov_self(uint64_t cnt) {
#undef ONE
#define ONE "mv t0, t0\n\t"

    asm volatile(
        ".align 8\n\t"
        "1:\n\t"
        HUNDRED
        "addi %0, %0, -1\n\t"
        "bnez %0, 1b\n\t"
        : "+r"(cnt)
        :
        : "t0");
}

void mov_self_test(double freq) {
    mov_self(10000);
    double begin = second();
    mov_self(__LOOP_COUNT);
    double end = second();
    double f = (__LOOP_COUNT * __INNER_COUNT) / 1.0e9 / (end - begin) / freq;
    printf("Mov self: %f ops/cycle\n", f);
}


void __attribute__ ((noinline)) mov_self_mul(uint64_t cnt) {
#undef ONE
#define ONE \
    "mv t0, t0\n\t" \
    "mv t1, t1\n\t" \
    "mv t2, t2\n\t" \
    "mv t3, t3\n\t" \
    "mv t4, t4\n\t" \
    "mv t5, t5\n\t" \
    "mv t6, t6\n\t"

    asm volatile(
        ".align 8\n\t"
        "1:\n\t"
        HUNDRED
        "addi %0, %0, -1\n\t"
        "bnez %0, 1b\n\t"
        : "+r"(cnt)
        :
        : "t0", "t1", "t2", "t3", "t4", "t5", "t6");
}

void mov_self_mul_test(double freq) {
    mov_self_mul(10000);
    double begin = second();
    mov_self_mul(__LOOP_COUNT);
    double end = second();
    double f = (__LOOP_COUNT * __INNER_COUNT * 7) / 1.0e9 / (end - begin) / freq;
    printf("Mov self mul: %f ops/cycle\n", f);
}


void __attribute__ ((noinline)) mov_bounce(uint64_t cnt) {
#undef ONE
#define ONE \
    "mv t0, t1\n\t" \
    "mv t1, t0\n\t"

    asm volatile(
        ".align 8\n\t"
        "1:\n\t"
        HUNDRED
        "addi %0, %0, -1\n\t"
        "bnez %0, 1b\n\t"
        : "+r"(cnt)
        :
        : "t0", "t1");
}

void mov_bounce_test(double freq) {
    mov_bounce(10000);
    double begin = second();
    mov_bounce(__LOOP_COUNT);
    double end = second();
    double f = (__LOOP_COUNT * __INNER_COUNT * 2) / 1.0e9 / (end - begin) / freq;
    printf("Mov bounce: %f ops/cycle\n", f);
}


void __attribute__ ((noinline)) sub_(uint64_t cnt) {
#undef ONE
#define ONE "sub t0, t0, t0\n\t"

    asm volatile(
        ".align 8\n\t"
        "1:\n\t"
        HUNDRED
        "addi %0, %0, -1\n\t"
        "bnez %0, 1b\n\t"
        : "+r"(cnt)
        :
        : "t0");
}

void sub_test(double freq) {
    sub_(10000);
    double begin = second();
    sub_(__LOOP_COUNT);
    double end = second();
    double f = (__LOOP_COUNT * __INNER_COUNT) / 1.0e9 / (end - begin) / freq;
    printf("Sub elimination: %f ops/cycle\n", f);
}

void __attribute__ ((noinline)) xor_eli(uint64_t cnt) {
#undef ONE
#define ONE "xor t0, t0, t0\n\t"

    asm volatile(
        ".align 8\n\t"
        "1:\n\t"
        HUNDRED
        "addi %0, %0, -1\n\t"
        "bnez %0, 1b\n\t"
        : "+r"(cnt)
        :
        : "t0");
}

void xor_eli_test(double freq) {
    xor_eli(10000);
    double begin = second();
    xor_eli(__LOOP_COUNT);
    double end = second();
    double f = (__LOOP_COUNT * __INNER_COUNT) / 1.0e9 / (end - begin) / freq;
    printf("Xor elimination: %f ops/cycle\n", f);
}

int main(int argc, char* argv[]) {
    double freq = CPU_FREQ;
    mov_imm_zero_test(freq);
    mov_imm_one_test(freq);
    mov_chain_test(freq);
    mov_single_test(freq);
    fmov_single_test(freq);
    mov_self_test(freq);
    mov_self_mul_test(freq);
    mov_bounce_test(freq);
    sub_test(freq);
    xor_eli_test(freq);
    return 0;
}
