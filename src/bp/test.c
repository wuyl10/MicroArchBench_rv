#include "test.h"
#include <klib.h>
#include <klib-macros.h>

#define N 5000LL
#define MAXHIS 65536


int mycopy(unsigned int*src,unsigned int*dst,int pattern){
    for(int i=0; i<MAXHIS*2; i++){
        dst[i] = src[i%pattern];
    }
    return 0;
}

#define CSR_STR(s) _CSR_STR(s)
#define _CSR_STR(s) #s
#define CSRR(csr)                                     \
    ({                                                \
        uint64_t _temp;                               \
        asm volatile("csrr  %0, " CSR_STR(csr) "\n\r" \
                     : "=r"(_temp)::"memory");        \
        _temp;                                        \
    })

int random(){
    int rand1=CSRR(0xC01);  //time
    int rand2=CSRR(0xC00);  //cycle
    return rand1+rand2;
}

double begin; 
double end;

unsigned int a[MAXHIS*2];
unsigned int c[MAXHIS*2];
int pattern[] = {1,2,4,8,12,16,24,32,48,64,96,128,192,256,512,600,768,1024,1536,2048,3072,4096,5120,6144,8192,10240,12288,16384,24567,32768,65536};

#pragma GCC optimize ("O0")  // 禁用优化
int main()
{

    for(int i=0;i<MAXHIS*2;i++){
        a[i] = random()%2;
    }

    unsigned long long repeat = N;

    for(int cur_len=1;cur_len<31;cur_len++){
        mycopy(a,c,pattern[cur_len]);
        repeat = N;
        begin = uptime();       //毫秒
        ONE
        end = uptime();

        long long timeSpan = (end - begin);

        printf("%f\t", timeSpan * 1.0e6 / (N * (1L + 1L)));     //转为纳秒
    }
    putstr("\n");

    for(int cur_len=1;cur_len<31;cur_len++){
        mycopy(a,c,pattern[cur_len]);
        repeat = N;
        begin = uptime();
        TWO
        end = uptime();

        long long timeSpan =  (end - begin);

        printf("%f\t", timeSpan * 1.0e6  / (N * (2L + 1L)));

    }
    putstr("\n");

    for(int cur_len=1;cur_len<31;cur_len++){
        mycopy(a,c,pattern[cur_len]);
        repeat = N;
        begin = uptime();
        FOUR
        end = uptime();

        long long timeSpan =  (end - begin);
        
        printf("%f\t", timeSpan * 1.0e6 / (N * (4L + 1L)));

    }
    putstr("\n");

    for(int cur_len=1;cur_len<31;cur_len++){
        mycopy(a,c,pattern[cur_len]);
        repeat = N;
        begin = uptime();
        EIGHT
        end = uptime();

        long long timeSpan =  (end - begin);

        printf("%f\t", timeSpan * 1.0e6 / (N * (8L + 1L)));

    }
    putstr("\n");

    for(int cur_len=1;cur_len<31;cur_len++){
        mycopy(a,c,pattern[cur_len]);
        repeat = N;
        begin = uptime();
        SIXTEEN
        end = uptime();

        long long timeSpan =  (end - begin);

        printf("%f\t", timeSpan * 1.0e6 / (N * (16L + 1L)));

    }
    putstr("\n");

    for(int cur_len=1;cur_len<31;cur_len++){
        mycopy(a,c,pattern[cur_len]);
        repeat = N;
        begin = uptime();
        THIRTYTWO
        end = uptime();

        long long timeSpan =  (end - begin);
 
        printf("%f\t", timeSpan * 1.0e6 / (N * (32L + 1L)));

    }
    putstr("\n");

    for(int cur_len=1;cur_len<31;cur_len++){
        mycopy(a,c,pattern[cur_len]);
        repeat = N;
        begin = uptime();
        SIXTYFOUR
        end = uptime();

        long long timeSpan =  (end - begin);

        printf("%f\t", timeSpan * 1.0e6 / (N * (64L + 1L)));

    }
    putstr("\n");

    for(int cur_len=1;cur_len<31;cur_len++){
        mycopy(a,c,pattern[cur_len]);
        repeat = N;
        begin = uptime();
        HUNDRED
        end = uptime();

        long long timeSpan =  (end - begin);

        printf("%f\t", timeSpan * 1.0e6 / (N * (128L + 1L)));

    }
    putstr("\n");

    for(int cur_len=1;cur_len<31;cur_len++){
        mycopy(a,c,pattern[cur_len]);
        repeat = N;
        begin = uptime();
        TWOHUNDRED
        end = uptime();

        long long timeSpan =  (end - begin);

        printf("%f\t", timeSpan * 1.0e6 / (N * (256L + 1L)));

    }
    putstr("\n");

    for(int cur_len=1;cur_len<31;cur_len++){
        mycopy(a,c,pattern[cur_len]);
        repeat = N;
        begin = uptime();
        FIVEHUNDRED
        end = uptime();

        long long timeSpan =  (end - begin);

        printf("%f\t", timeSpan * 1.0e6 / (N * (512L + 1L)));

    }
    putstr("\n");

    for(int cur_len=1;cur_len<31;cur_len++){
        mycopy(a,c,pattern[cur_len]);
        repeat = N;
        begin = uptime();
        TENHUNDRED
        end = uptime();

        long long timeSpan =  (end - begin);

        printf("%f\t", timeSpan * 1.0e6 / (N * (1024L + 1L)));

    }
    putstr("\n");

    return 0;
}
