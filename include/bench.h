#ifndef __BENCH_H__
#define __BENCH_H__

#include <klib.h>
#include <klib-macros.h>

#define CPU_FREQ (0.5)

static inline double second() {
  // uptime() 返回毫秒数，转为秒
  return (double)uptime() * 200.0 / 1.0e9;
}

#endif