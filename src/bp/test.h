#define ONE \
asm volatile(\
  "2: \n\t" \
  "lw t0, 0(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "addi %0, %0, 32\n\t " \
  "addi %1, %1, -1\n\t" \
  "bne %1, zero, 2b \n\t" \
  : \
  : "r"(c), "r"(repeat) \
  : "t0");

#define TWO \
asm volatile(\
  "2: \n\t" \
  "lw t0, 0(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 32(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "addi %0, %0, 32\n\t " \
  "addi %1, %1, -1\n\t" \
  "bne %1, zero, 2b \n\t" \
  : \
  : "r"(c), "r"(repeat) \
  : "t0");

#define FOUR \
asm volatile(\
  "2: \n\t" \
  "lw t0, 0(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 32(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 64(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 96(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "addi %0, %0, 32\n\t " \
  "addi %1, %1, -1\n\t" \
  "bne %1, zero, 2b \n\t" \
  : \
  : "r"(c), "r"(repeat) \
  : "t0");

#define EIGHT \
asm volatile(\
  "2: \n\t" \
  "lw t0, 0(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 32(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 64(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 96(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 128(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 160(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 192(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 224(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "addi %0, %0, 32\n\t " \
  "addi %1, %1, -1\n\t" \
  "bne %1, zero, 2b \n\t" \
  : \
  : "r"(c), "r"(repeat) \
  : "t0");

#define SIXTEEN \
asm volatile(\
  "2: \n\t" \
  "lw t0, 0(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 32(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 64(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 96(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 128(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 160(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 192(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 224(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 256(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 288(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 320(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 352(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 384(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 416(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 448(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 480(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "addi %0, %0, 32\n\t " \
  "addi %1, %1, -1\n\t" \
  "bne %1, zero, 2b \n\t" \
  : \
  : "r"(c), "r"(repeat) \
  : "t0");

#define THIRTYTWO \
asm volatile(\
  "2: \n\t" \
  "lw t0, 0(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 32(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 64(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 96(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 128(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 160(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 192(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 224(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 256(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 288(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 320(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 352(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 384(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 416(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 448(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 480(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 512(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 544(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 576(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 608(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 640(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 672(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 704(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 736(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 768(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 800(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 832(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 864(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 896(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 928(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 960(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 992(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "addi %0, %0, 32\n\t " \
  "addi %1, %1, -1\n\t" \
  "bne %1, zero, 2b \n\t" \
  : \
  : "r"(c), "r"(repeat) \
  : "t0");

#define SIXTYFOUR \
asm volatile(\
  "2: \n\t" \
  "lw t0, 0(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 32(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 64(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 96(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 128(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 160(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 192(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 224(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 256(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 288(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 320(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 352(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 384(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 416(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 448(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 480(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 512(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 544(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 576(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 608(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 640(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 672(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 704(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 736(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 768(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 800(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 832(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 864(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 896(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 928(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 960(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 992(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1024(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1056(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1088(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1120(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1152(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1184(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1216(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1248(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1280(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1312(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1344(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1376(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1408(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1440(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1472(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1504(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1536(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1568(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1600(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1632(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1664(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1696(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1728(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1760(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1792(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1824(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1856(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1888(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1920(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1952(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1984(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 2016(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "addi %0, %0, 32\n\t " \
  "addi %1, %1, -1\n\t" \
  "bne %1, zero, 2b \n\t" \
  : \
  : "r"(c), "r"(repeat) \
  : "t0");

#define HUNDRED \
asm volatile(\
  "2: \n\t" \
  "lw t0, 0(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 8(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 16(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 24(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 32(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 40(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 48(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 56(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 64(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 72(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 80(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 88(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 96(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 104(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 112(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 120(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 128(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 136(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 144(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 152(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 160(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 168(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 176(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 184(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 192(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 200(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 208(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 216(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 224(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 232(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 240(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 248(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 256(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 264(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 272(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 280(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 288(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 296(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 304(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 312(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 320(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 328(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 336(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 344(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 352(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 360(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 368(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 376(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 384(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 392(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 400(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 408(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 416(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 424(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 432(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 440(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 448(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 456(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 464(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 472(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 480(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 488(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 496(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 504(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 512(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 520(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 528(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 536(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 544(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 552(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 560(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 568(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 576(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 584(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 592(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 600(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 608(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 616(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 624(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 632(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 640(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 648(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 656(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 664(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 672(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 680(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 688(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 696(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 704(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 712(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 720(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 728(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 736(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 744(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 752(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 760(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 768(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 776(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 784(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 792(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 800(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 808(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 816(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 824(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 832(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 840(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 848(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 856(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 864(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 872(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 880(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 888(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 896(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 904(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 912(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 920(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 928(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 936(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 944(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 952(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 960(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 968(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 976(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 984(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 992(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1000(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1008(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1016(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "addi %0, %0, 32\n\t " \
  "addi %1, %1, -1\n\t" \
  "bne %1, zero, 2b \n\t" \
  : \
  : "r"(c), "r"(repeat) \
  : "t0");

#define TWOHUNDRED \
asm volatile(\
  "2: \n\t" \
  "lw t0, 0(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 8(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 16(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 24(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 32(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 40(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 48(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 56(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 64(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 72(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 80(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 88(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 96(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 104(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 112(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 120(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 128(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 136(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 144(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 152(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 160(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 168(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 176(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 184(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 192(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 200(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 208(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 216(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 224(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 232(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 240(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 248(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 256(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 264(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 272(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 280(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 288(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 296(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 304(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 312(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 320(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 328(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 336(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 344(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 352(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 360(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 368(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 376(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 384(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 392(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 400(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 408(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 416(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 424(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 432(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 440(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 448(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 456(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 464(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 472(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 480(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 488(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 496(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 504(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 512(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 520(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 528(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 536(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 544(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 552(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 560(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 568(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 576(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 584(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 592(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 600(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 608(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 616(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 624(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 632(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 640(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 648(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 656(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 664(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 672(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 680(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 688(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 696(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 704(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 712(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 720(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 728(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 736(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 744(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 752(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 760(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 768(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 776(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 784(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 792(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 800(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 808(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 816(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 824(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 832(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 840(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 848(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 856(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 864(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 872(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 880(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 888(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 896(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 904(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 912(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 920(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 928(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 936(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 944(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 952(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 960(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 968(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 976(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 984(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 992(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1000(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1008(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1016(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 0(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 8(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 16(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 24(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 32(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 40(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 48(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 56(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 64(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 72(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 80(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 88(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 96(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 104(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 112(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 120(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 128(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 136(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 144(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 152(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 160(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 168(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 176(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 184(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 192(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 200(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 208(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 216(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 224(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 232(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 240(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 248(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 256(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 264(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 272(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 280(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 288(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 296(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 304(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 312(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 320(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 328(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 336(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 344(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 352(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 360(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 368(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 376(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 384(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 392(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 400(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 408(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 416(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 424(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 432(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 440(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 448(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 456(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 464(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 472(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 480(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 488(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 496(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 504(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 512(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 520(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 528(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 536(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 544(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 552(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 560(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 568(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 576(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 584(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 592(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 600(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 608(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 616(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 624(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 632(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 640(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 648(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 656(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 664(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 672(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 680(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 688(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 696(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 704(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 712(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 720(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 728(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 736(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 744(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 752(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 760(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 768(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 776(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 784(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 792(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 800(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 808(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 816(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 824(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 832(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 840(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 848(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 856(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 864(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 872(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 880(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 888(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 896(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 904(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 912(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 920(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 928(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 936(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 944(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 952(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 960(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 968(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 976(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 984(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 992(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1000(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1008(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1016(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "addi %0, %0, 32\n\t " \
  "addi %1, %1, -1\n\t" \
  "bne %1, zero, 2b \n\t" \
  : \
  : "r"(c), "r"(repeat) \
  : "t0");

#define FIVEHUNDRED \
asm volatile(\
  "2: \n\t" \
  "lw t0, 0(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 8(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 16(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 24(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 32(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 40(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 48(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 56(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 64(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 72(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 80(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 88(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 96(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 104(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 112(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 120(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 128(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 136(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 144(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 152(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 160(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 168(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 176(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 184(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 192(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 200(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 208(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 216(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 224(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 232(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 240(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 248(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 256(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 264(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 272(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 280(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 288(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 296(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 304(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 312(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 320(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 328(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 336(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 344(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 352(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 360(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 368(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 376(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 384(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 392(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 400(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 408(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 416(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 424(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 432(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 440(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 448(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 456(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 464(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 472(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 480(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 488(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 496(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 504(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 512(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 520(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 528(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 536(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 544(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 552(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 560(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 568(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 576(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 584(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 592(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 600(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 608(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 616(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 624(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 632(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 640(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 648(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 656(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 664(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 672(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 680(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 688(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 696(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 704(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 712(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 720(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 728(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 736(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 744(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 752(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 760(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 768(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 776(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 784(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 792(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 800(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 808(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 816(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 824(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 832(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 840(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 848(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 856(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 864(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 872(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 880(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 888(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 896(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 904(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 912(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 920(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 928(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 936(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 944(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 952(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 960(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 968(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 976(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 984(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 992(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1000(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1008(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1016(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 0(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 8(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 16(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 24(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 32(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 40(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 48(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 56(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 64(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 72(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 80(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 88(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 96(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 104(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 112(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 120(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 128(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 136(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 144(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 152(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 160(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 168(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 176(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 184(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 192(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 200(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 208(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 216(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 224(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 232(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 240(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 248(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 256(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 264(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 272(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 280(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 288(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 296(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 304(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 312(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 320(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 328(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 336(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 344(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 352(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 360(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 368(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 376(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 384(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 392(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 400(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 408(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 416(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 424(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 432(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 440(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 448(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 456(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 464(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 472(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 480(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 488(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 496(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 504(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 512(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 520(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 528(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 536(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 544(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 552(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 560(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 568(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 576(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 584(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 592(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 600(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 608(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 616(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 624(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 632(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 640(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 648(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 656(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 664(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 672(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 680(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 688(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 696(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 704(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 712(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 720(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 728(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 736(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 744(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 752(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 760(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 768(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 776(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 784(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 792(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 800(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 808(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 816(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 824(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 832(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 840(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 848(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 856(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 864(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 872(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 880(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 888(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 896(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 904(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 912(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 920(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 928(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 936(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 944(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 952(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 960(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 968(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 976(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 984(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 992(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1000(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1008(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1016(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 0(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 8(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 16(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 24(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 32(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 40(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 48(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 56(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 64(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 72(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 80(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 88(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 96(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 104(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 112(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 120(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 128(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 136(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 144(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 152(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 160(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 168(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 176(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 184(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 192(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 200(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 208(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 216(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 224(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 232(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 240(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 248(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 256(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 264(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 272(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 280(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 288(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 296(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 304(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 312(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 320(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 328(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 336(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 344(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 352(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 360(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 368(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 376(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 384(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 392(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 400(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 408(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 416(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 424(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 432(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 440(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 448(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 456(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 464(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 472(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 480(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 488(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 496(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 504(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 512(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 520(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 528(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 536(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 544(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 552(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 560(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 568(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 576(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 584(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 592(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 600(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 608(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 616(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 624(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 632(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 640(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 648(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 656(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 664(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 672(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 680(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 688(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 696(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 704(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 712(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 720(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 728(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 736(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 744(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 752(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 760(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 768(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 776(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 784(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 792(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 800(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 808(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 816(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 824(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 832(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 840(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 848(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 856(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 864(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 872(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 880(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 888(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 896(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 904(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 912(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 920(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 928(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 936(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 944(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 952(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 960(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 968(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 976(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 984(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 992(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1000(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1008(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1016(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 0(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 8(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 16(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 24(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 32(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 40(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 48(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 56(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 64(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 72(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 80(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 88(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 96(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 104(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 112(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 120(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 128(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 136(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 144(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 152(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 160(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 168(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 176(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 184(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 192(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 200(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 208(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 216(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 224(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 232(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 240(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 248(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 256(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 264(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 272(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 280(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 288(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 296(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 304(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 312(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 320(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 328(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 336(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 344(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 352(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 360(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 368(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 376(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 384(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 392(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 400(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 408(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 416(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 424(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 432(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 440(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 448(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 456(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 464(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 472(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 480(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 488(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 496(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 504(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 512(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 520(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 528(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 536(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 544(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 552(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 560(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 568(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 576(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 584(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 592(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 600(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 608(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 616(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 624(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 632(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 640(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 648(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 656(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 664(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 672(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 680(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 688(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 696(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 704(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 712(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 720(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 728(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 736(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 744(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 752(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 760(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 768(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 776(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 784(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 792(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 800(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 808(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 816(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 824(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 832(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 840(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 848(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 856(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 864(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 872(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 880(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 888(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 896(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 904(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 912(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 920(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 928(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 936(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 944(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 952(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 960(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 968(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 976(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 984(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 992(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1000(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1008(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1016(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "addi %0, %0, 32\n\t " \
  "addi %1, %1, -1\n\t" \
  "bne %1, zero, 2b \n\t" \
  : \
  : "r"(c), "r"(repeat) \
  : "t0");

#define TENHUNDRED \
asm volatile(\
  "2: \n\t" \
  "lw t0, 0(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 8(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 16(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 24(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 32(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 40(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 48(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 56(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 64(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 72(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 80(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 88(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 96(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 104(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 112(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 120(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 128(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 136(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 144(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 152(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 160(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 168(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 176(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 184(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 192(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 200(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 208(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 216(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 224(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 232(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 240(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 248(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 256(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 264(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 272(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 280(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 288(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 296(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 304(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 312(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 320(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 328(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 336(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 344(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 352(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 360(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 368(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 376(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 384(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 392(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 400(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 408(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 416(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 424(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 432(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 440(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 448(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 456(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 464(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 472(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 480(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 488(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 496(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 504(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 512(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 520(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 528(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 536(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 544(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 552(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 560(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 568(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 576(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 584(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 592(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 600(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 608(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 616(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 624(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 632(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 640(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 648(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 656(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 664(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 672(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 680(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 688(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 696(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 704(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 712(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 720(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 728(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 736(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 744(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 752(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 760(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 768(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 776(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 784(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 792(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 800(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 808(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 816(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 824(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 832(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 840(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 848(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 856(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 864(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 872(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 880(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 888(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 896(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 904(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 912(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 920(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 928(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 936(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 944(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 952(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 960(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 968(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 976(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 984(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 992(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1000(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1008(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1016(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 0(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 8(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 16(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 24(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 32(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 40(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 48(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 56(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 64(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 72(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 80(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 88(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 96(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 104(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 112(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 120(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 128(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 136(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 144(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 152(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 160(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 168(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 176(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 184(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 192(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 200(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 208(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 216(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 224(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 232(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 240(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 248(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 256(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 264(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 272(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 280(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 288(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 296(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 304(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 312(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 320(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 328(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 336(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 344(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 352(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 360(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 368(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 376(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 384(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 392(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 400(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 408(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 416(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 424(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 432(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 440(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 448(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 456(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 464(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 472(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 480(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 488(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 496(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 504(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 512(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 520(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 528(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 536(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 544(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 552(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 560(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 568(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 576(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 584(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 592(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 600(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 608(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 616(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 624(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 632(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 640(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 648(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 656(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 664(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 672(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 680(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 688(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 696(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 704(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 712(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 720(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 728(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 736(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 744(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 752(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 760(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 768(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 776(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 784(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 792(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 800(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 808(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 816(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 824(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 832(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 840(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 848(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 856(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 864(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 872(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 880(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 888(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 896(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 904(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 912(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 920(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 928(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 936(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 944(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 952(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 960(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 968(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 976(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 984(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 992(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1000(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1008(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1016(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 0(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 8(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 16(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 24(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 32(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 40(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 48(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 56(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 64(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 72(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 80(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 88(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 96(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 104(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 112(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 120(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 128(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 136(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 144(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 152(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 160(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 168(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 176(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 184(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 192(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 200(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 208(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 216(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 224(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 232(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 240(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 248(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 256(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 264(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 272(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 280(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 288(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 296(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 304(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 312(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 320(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 328(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 336(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 344(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 352(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 360(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 368(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 376(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 384(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 392(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 400(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 408(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 416(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 424(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 432(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 440(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 448(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 456(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 464(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 472(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 480(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 488(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 496(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 504(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 512(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 520(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 528(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 536(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 544(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 552(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 560(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 568(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 576(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 584(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 592(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 600(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 608(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 616(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 624(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 632(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 640(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 648(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 656(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 664(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 672(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 680(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 688(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 696(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 704(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 712(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 720(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 728(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 736(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 744(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 752(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 760(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 768(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 776(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 784(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 792(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 800(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 808(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 816(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 824(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 832(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 840(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 848(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 856(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 864(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 872(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 880(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 888(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 896(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 904(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 912(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 920(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 928(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 936(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 944(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 952(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 960(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 968(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 976(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 984(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 992(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1000(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1008(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1016(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 0(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 8(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 16(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 24(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 32(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 40(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 48(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 56(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 64(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 72(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 80(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 88(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 96(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 104(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 112(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 120(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 128(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 136(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 144(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 152(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 160(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 168(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 176(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 184(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 192(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 200(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 208(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 216(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 224(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 232(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 240(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 248(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 256(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 264(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 272(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 280(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 288(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 296(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 304(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 312(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 320(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 328(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 336(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 344(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 352(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 360(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 368(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 376(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 384(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 392(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 400(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 408(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 416(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 424(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 432(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 440(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 448(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 456(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 464(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 472(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 480(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 488(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 496(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 504(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 512(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 520(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 528(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 536(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 544(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 552(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 560(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 568(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 576(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 584(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 592(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 600(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 608(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 616(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 624(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 632(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 640(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 648(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 656(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 664(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 672(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 680(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 688(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 696(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 704(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 712(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 720(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 728(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 736(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 744(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 752(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 760(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 768(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 776(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 784(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 792(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 800(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 808(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 816(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 824(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 832(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 840(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 848(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 856(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 864(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 872(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 880(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 888(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 896(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 904(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 912(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 920(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 928(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 936(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 944(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 952(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 960(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 968(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 976(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 984(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 992(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1000(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1008(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1016(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 0(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 8(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 16(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 24(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 32(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 40(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 48(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 56(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 64(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 72(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 80(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 88(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 96(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 104(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 112(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 120(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 128(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 136(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 144(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 152(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 160(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 168(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 176(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 184(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 192(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 200(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 208(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 216(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 224(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 232(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 240(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 248(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 256(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 264(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 272(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 280(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 288(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 296(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 304(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 312(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 320(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 328(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 336(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 344(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 352(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 360(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 368(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 376(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 384(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 392(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 400(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 408(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 416(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 424(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 432(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 440(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 448(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 456(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 464(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 472(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 480(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 488(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 496(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 504(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 512(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 520(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 528(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 536(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 544(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 552(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 560(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 568(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 576(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 584(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 592(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 600(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 608(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 616(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 624(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 632(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 640(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 648(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 656(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 664(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 672(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 680(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 688(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 696(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 704(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 712(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 720(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 728(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 736(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 744(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 752(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 760(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 768(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 776(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 784(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 792(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 800(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 808(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 816(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 824(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 832(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 840(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 848(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 856(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 864(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 872(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 880(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 888(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 896(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 904(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 912(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 920(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 928(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 936(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 944(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 952(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 960(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 968(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 976(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 984(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 992(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1000(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1008(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1016(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 0(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 8(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 16(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 24(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 32(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 40(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 48(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 56(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 64(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 72(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 80(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 88(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 96(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 104(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 112(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 120(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 128(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 136(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 144(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 152(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 160(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 168(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 176(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 184(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 192(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 200(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 208(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 216(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 224(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 232(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 240(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 248(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 256(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 264(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 272(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 280(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 288(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 296(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 304(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 312(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 320(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 328(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 336(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 344(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 352(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 360(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 368(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 376(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 384(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 392(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 400(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 408(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 416(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 424(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 432(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 440(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 448(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 456(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 464(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 472(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 480(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 488(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 496(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 504(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 512(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 520(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 528(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 536(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 544(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 552(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 560(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 568(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 576(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 584(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 592(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 600(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 608(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 616(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 624(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 632(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 640(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 648(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 656(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 664(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 672(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 680(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 688(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 696(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 704(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 712(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 720(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 728(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 736(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 744(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 752(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 760(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 768(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 776(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 784(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 792(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 800(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 808(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 816(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 824(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 832(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 840(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 848(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 856(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 864(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 872(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 880(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 888(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 896(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 904(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 912(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 920(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 928(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 936(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 944(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 952(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 960(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 968(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 976(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 984(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 992(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1000(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1008(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1016(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 0(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 8(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 16(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 24(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 32(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 40(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 48(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 56(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 64(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 72(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 80(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 88(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 96(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 104(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 112(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 120(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 128(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 136(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 144(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 152(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 160(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 168(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 176(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 184(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 192(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 200(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 208(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 216(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 224(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 232(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 240(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 248(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 256(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 264(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 272(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 280(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 288(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 296(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 304(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 312(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 320(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 328(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 336(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 344(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 352(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 360(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 368(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 376(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 384(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 392(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 400(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 408(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 416(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 424(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 432(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 440(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 448(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 456(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 464(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 472(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 480(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 488(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 496(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 504(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 512(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 520(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 528(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 536(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 544(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 552(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 560(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 568(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 576(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 584(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 592(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 600(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 608(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 616(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 624(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 632(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 640(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 648(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 656(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 664(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 672(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 680(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 688(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 696(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 704(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 712(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 720(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 728(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 736(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 744(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 752(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 760(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 768(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 776(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 784(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 792(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 800(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 808(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 816(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 824(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 832(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 840(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 848(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 856(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 864(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 872(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 880(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 888(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 896(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 904(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 912(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 920(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 928(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 936(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 944(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 952(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 960(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 968(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 976(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 984(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 992(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1000(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1008(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1016(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 0(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 8(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 16(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 24(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 32(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 40(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 48(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 56(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 64(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 72(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 80(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 88(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 96(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 104(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 112(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 120(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 128(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 136(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 144(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 152(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 160(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 168(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 176(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 184(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 192(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 200(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 208(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 216(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 224(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 232(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 240(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 248(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 256(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 264(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 272(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 280(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 288(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 296(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 304(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 312(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 320(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 328(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 336(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 344(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 352(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 360(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 368(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 376(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 384(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 392(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 400(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 408(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 416(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 424(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 432(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 440(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 448(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 456(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 464(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 472(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 480(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 488(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 496(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 504(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 512(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 520(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 528(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 536(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 544(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 552(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 560(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 568(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 576(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 584(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 592(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 600(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 608(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 616(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 624(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 632(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 640(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 648(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 656(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 664(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 672(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 680(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 688(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 696(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 704(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 712(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 720(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 728(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 736(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 744(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 752(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 760(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 768(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 776(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 784(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 792(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 800(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 808(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 816(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 824(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 832(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 840(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 848(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 856(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 864(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 872(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 880(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 888(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 896(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 904(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 912(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 920(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 928(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 936(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 944(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 952(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 960(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 968(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 976(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 984(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 992(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1000(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1008(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "lw t0, 1016(%0)\n\t" \
  "beq t0, zero, 1f\n\t 1: " \
  "1: \n\t" \
  "addi %0, %0, 32\n\t " \
  "addi %1, %1, -1\n\t" \
  "bne %1, zero, 2b \n\t" \
  : \
  : "r"(c), "r"(repeat) \
  : "t0");

