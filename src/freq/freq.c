#include <klib.h>
#include <klib-macros.h>


static inline double second() {
    return uptime()/1000.0;
}

#define FIVE ONE ONE ONE ONE ONE
#define TEN FIVE FIVE

#ifndef __INNER_COUNT
#define __INNER_COUNT 30ULL
#endif

#ifndef __LOOP_COUNT
#define __LOOP_COUNT 1000000ULL
#endif

void __attribute__ ((noinline)) freq(uint64_t cnt) {
#define ONE "addi t0, t0, 2047\n"
    asm volatile(
        ".align 8 \r\n"
        "1: \n"
        TEN TEN TEN
        "addi %0, %0, -1 \n"
        "bnez %0, 1b \n"
        :
        :"r"(cnt)
        :"t0", "memory");
}

void freq_test() {
    freq(10000);// 预热执行一次以减少测量误差
    double begin = second();
    freq(__LOOP_COUNT);  // 执行主测试循环
    double end = second();
    double f = (__LOOP_COUNT * __INNER_COUNT) / 1000000000.0 / (end - begin);
    char buffer[100];
    snprintf(buffer, sizeof(buffer), "Frequency: %f GHz, Cycle time: %f ns\n", f, 1/f);
    putstr(buffer);
}

int main() {
    freq_test();
    return 0;
}
