.globl _start
_start:
    lui  x5, 0x1
    lui  x6, 0x2
    add  x7, x5, x6
    sub  x8, x5, x6
    j    .
