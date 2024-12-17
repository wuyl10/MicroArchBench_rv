#ifndef __BENCH_H__
#define __BENCH_H__

#include <klib.h>
#include <klib-macros.h>

#define CPU_FREQ (0.5)

//uptime读取的单位根据timer的频率改变（若timer频率是5MHz，则uptime读出来单位是200ns）
static inline double second() {
  return (double)uptime() * 200.0 / 1.0e9;  // 转为秒
}

static inline double nanosecond() {
  return (double)uptime() * 200.0;  // 转为纳秒
}

#endif