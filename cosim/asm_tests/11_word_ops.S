.globl _start
_start:
    lui   x5, 0x80000
    addw  x6, x5, x0
    subw  x7, x0, x5
    j     .
