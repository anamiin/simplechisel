.globl _start
_start:
    lui  x5, 0x10
    addi x6, x0, 3
    sw   x6, 0(x5)
    addi x6, x0, 4
    sw   x6, 4(x5)
    addi x6, x0, 5
    sw   x6, 8(x5)
    lw   x10, 0(x5)
    lw   x11, 4(x5)
    lw   x12, 8(x5)
    add  x13, x10, x11
    add  x13, x13, x12
    j    .
