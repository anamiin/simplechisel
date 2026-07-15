.globl _start
_start:
    lui  x5, 0x1
    slli x7, x5, 4
    srli x8, x7, 2
    lui  x9, 0x80000
    srai x10, x9, 4
    srli x11, x9, 4
    j    .
