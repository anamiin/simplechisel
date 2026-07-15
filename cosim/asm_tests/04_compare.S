.globl _start
_start:
    addi x5, x0, -1
    addi x6, x0, 1
    slt  x7, x5, x6
    sltu x8, x5, x6
    slti x9, x6, 2
    sltiu x10, x5, 1
    j    .
