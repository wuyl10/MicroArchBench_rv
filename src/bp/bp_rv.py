tmp = open("test.h", "w")

# 定义 ONE 宏
tmp.write("#define ONE \\\n")
tmp.write("asm volatile(\\\n")
tmp.write("  \"2: \\n\\t\" \\\n")
for i in range(0, 1):
    tmp.write("  \"lw t0, " + str(i*32) + "(%0)\\n\\t\" \\\n")
    tmp.write("  \"beq t0, zero, 1f\\n\\t\" \\\n")
    tmp.write("  \"1: \\n\\t\" \\\n")
tmp.write("  \"addi %0, %0, 32\\n\\t \" \\\n")
tmp.write("  \"addi %1, %1, -1\\n\\t\" \\\n")
tmp.write("  \"bne %1, zero, 2b \\n\\t\" \\\n")
tmp.write("  : \\\n")
tmp.write("  : \"r\"(c), \"r\"(repeat) \\\n")
tmp.write("  : \"t0\");\n\n")

# 定义 TWO 宏
tmp.write("#define TWO \\\n")
tmp.write("asm volatile(\\\n")
tmp.write("  \"2: \\n\\t\" \\\n")
for i in range(0, 2):
    tmp.write("  \"lw t0, " + str(i*32) + "(%0)\\n\\t\" \\\n")
    tmp.write("  \"beq t0, zero, 1f\\n\\t\" \\\n")
    tmp.write("  \"1: \\n\\t\" \\\n")
tmp.write("  \"addi %0, %0, 32\\n\\t \" \\\n")
tmp.write("  \"addi %1, %1, -1\\n\\t\" \\\n")
tmp.write("  \"bne %1, zero, 2b \\n\\t\" \\\n")
tmp.write("  : \\\n")
tmp.write("  : \"r\"(c), \"r\"(repeat) \\\n")
tmp.write("  : \"t0\");\n\n")

# 定义 FOUR 宏
tmp.write("#define FOUR \\\n")
tmp.write("asm volatile(\\\n")
tmp.write("  \"2: \\n\\t\" \\\n")
for i in range(0, 4):
    tmp.write("  \"lw t0, " + str(i*32) + "(%0)\\n\\t\" \\\n")
    tmp.write("  \"beq t0, zero, 1f\\n\\t \" \\\n")
    tmp.write("  \"1: \\n\\t\" \\\n")
tmp.write("  \"addi %0, %0, 32\\n\\t \" \\\n")
tmp.write("  \"addi %1, %1, -1\\n\\t\" \\\n")
tmp.write("  \"bne %1, zero, 2b \\n\\t\" \\\n")
tmp.write("  : \\\n")
tmp.write("  : \"r\"(c), \"r\"(repeat) \\\n")
tmp.write("  : \"t0\");\n\n")

# 定义 EIGHT 宏
tmp.write("#define EIGHT \\\n")
tmp.write("asm volatile(\\\n")
tmp.write("  \"2: \\n\\t\" \\\n")
for i in range(0, 8):
    tmp.write("  \"lw t0, " + str(i*32) + "(%0)\\n\\t\" \\\n")
    tmp.write("  \"beq t0, zero, 1f\\n\\t \" \\\n")
    tmp.write("  \"1: \\n\\t\" \\\n")
tmp.write("  \"addi %0, %0, 32\\n\\t \" \\\n")
tmp.write("  \"addi %1, %1, -1\\n\\t\" \\\n")
tmp.write("  \"bne %1, zero, 2b \\n\\t\" \\\n")
tmp.write("  : \\\n")
tmp.write("  : \"r\"(c), \"r\"(repeat) \\\n")
tmp.write("  : \"t0\");\n\n")

# 定义 SIXTEEN 宏
tmp.write("#define SIXTEEN \\\n")
tmp.write("asm volatile(\\\n")
tmp.write("  \"2: \\n\\t\" \\\n")
for i in range(0, 16):
    tmp.write("  \"lw t0, " + str(i*32) + "(%0)\\n\\t\" \\\n")
    tmp.write("  \"beq t0, zero, 1f\\n\\t \" \\\n")
    tmp.write("  \"1: \\n\\t\" \\\n")
tmp.write("  \"addi %0, %0, 32\\n\\t \" \\\n")
tmp.write("  \"addi %1, %1, -1\\n\\t\" \\\n")
tmp.write("  \"bne %1, zero, 2b \\n\\t\" \\\n")
tmp.write("  : \\\n")
tmp.write("  : \"r\"(c), \"r\"(repeat) \\\n")
tmp.write("  : \"t0\");\n\n")

# 定义 THIRTYTWO 宏
tmp.write("#define THIRTYTWO \\\n")
tmp.write("asm volatile(\\\n")
tmp.write("  \"2: \\n\\t\" \\\n")
for i in range(0, 32):
    tmp.write("  \"lw t0, " + str(i*32) + "(%0)\\n\\t\" \\\n")
    tmp.write("  \"beq t0, zero, 1f\\n\\t \" \\\n")
    tmp.write("  \"1: \\n\\t\" \\\n")
tmp.write("  \"addi %0, %0, 32\\n\\t \" \\\n")
tmp.write("  \"addi %1, %1, -1\\n\\t\" \\\n")
tmp.write("  \"bne %1, zero, 2b \\n\\t\" \\\n")
tmp.write("  : \\\n")
tmp.write("  : \"r\"(c), \"r\"(repeat) \\\n")
tmp.write("  : \"t0\");\n\n")

# 定义 SIXTYFOUR 宏
tmp.write("#define SIXTYFOUR \\\n")
tmp.write("asm volatile(\\\n")
tmp.write("  \"2: \\n\\t\" \\\n")
for i in range(0, 64):
    tmp.write("  \"lw t0, " + str(i*32) + "(%0)\\n\\t\" \\\n")
    tmp.write("  \"beq t0, zero, 1f\\n\\t \" \\\n")
    tmp.write("  \"1: \\n\\t\" \\\n")
tmp.write("  \"addi %0, %0, 32\\n\\t \" \\\n")
tmp.write("  \"addi %1, %1, -1\\n\\t\" \\\n")
tmp.write("  \"bne %1, zero, 2b \\n\\t\" \\\n")
tmp.write("  : \\\n")
tmp.write("  : \"r\"(c), \"r\"(repeat) \\\n")
tmp.write("  : \"t0\");\n\n")

# 定义 HUNDRED 宏
tmp.write("#define HUNDRED \\\n")
tmp.write("asm volatile(\\\n")
tmp.write("  \"2: \\n\\t\" \\\n")
for i in range(0, 128):
    tmp.write("  \"lw t0, " + str((i*8)%1024) + "(%0)\\n\\t\" \\\n")
    tmp.write("  \"beq t0, zero, 1f\\n\\t \" \\\n")
    tmp.write("  \"1: \\n\\t\" \\\n")
tmp.write("  \"addi %0, %0, 32\\n\\t \" \\\n")
tmp.write("  \"addi %1, %1, -1\\n\\t\" \\\n")
tmp.write("  \"bne %1, zero, 2b \\n\\t\" \\\n")
tmp.write("  : \\\n")
tmp.write("  : \"r\"(c), \"r\"(repeat) \\\n")
tmp.write("  : \"t0\");\n\n")

# 定义 TWOHUNDRED 宏
tmp.write("#define TWOHUNDRED \\\n")
tmp.write("asm volatile(\\\n")
tmp.write("  \"2: \\n\\t\" \\\n")
for i in range(0, 256):
    tmp.write("  \"lw t0, " + str((i*8)%1024) + "(%0)\\n\\t\" \\\n")
    tmp.write("  \"beq t0, zero, 1f\\n\\t \" \\\n")
    tmp.write("  \"1: \\n\\t\" \\\n")
tmp.write("  \"addi %0, %0, 32\\n\\t \" \\\n")
tmp.write("  \"addi %1, %1, -1\\n\\t\" \\\n")
tmp.write("  \"bne %1, zero, 2b \\n\\t\" \\\n")
tmp.write("  : \\\n")
tmp.write("  : \"r\"(c), \"r\"(repeat) \\\n")
tmp.write("  : \"t0\");\n\n")

# 定义 FIVEHUNDRED 宏
tmp.write("#define FIVEHUNDRED \\\n")
tmp.write("asm volatile(\\\n")
tmp.write("  \"2: \\n\\t\" \\\n")
for i in range(0, 512):
    tmp.write("  \"lw t0, " + str((i*8)%1024) + "(%0)\\n\\t\" \\\n")
    tmp.write("  \"beq t0, zero, 1f\\n\\t \" \\\n")
    tmp.write("  \"1: \\n\\t\" \\\n")
tmp.write("  \"addi %0, %0, 32\\n\\t \" \\\n")
tmp.write("  \"addi %1, %1, -1\\n\\t\" \\\n")
tmp.write("  \"bne %1, zero, 2b \\n\\t\" \\\n")
tmp.write("  : \\\n")
tmp.write("  : \"r\"(c), \"r\"(repeat) \\\n")
tmp.write("  : \"t0\");\n\n")

# 定义 TENHUNDRED 宏
tmp.write("#define TENHUNDRED \\\n")
tmp.write("asm volatile(\\\n")
tmp.write("  \"2: \\n\\t\" \\\n")
for i in range(0, 1024):
    tmp.write("  \"lw t0, " + str((i*8)%1024) + "(%0)\\n\\t\" \\\n")
    tmp.write("  \"beq t0, zero, 1f\\n\\t \" \\\n")
    tmp.write("  \"1: \\n\\t\" \\\n")
tmp.write("  \"addi %0, %0, 32\\n\\t \" \\\n")
tmp.write("  \"addi %1, %1, -1\\n\\t\" \\\n")
tmp.write("  \"bne %1, zero, 2b \\n\\t\" \\\n")
tmp.write("  : \\\n")
tmp.write("  : \"r\"(c), \"r\"(repeat) \\\n")
tmp.write("  : \"t0\");\n\n")
