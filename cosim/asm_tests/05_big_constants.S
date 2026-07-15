.globl _start
_start:
    lui   x5, 0x12345
    addi  x5, x5, 0x678
    auipc x6, 0
    addi  x7, x6, 12
    j     .
