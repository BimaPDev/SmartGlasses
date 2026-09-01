; FUN_1011fa22 @ 0x1011fa22 size=32
  movw r3,#0x2b11
  udiv r2,r0,r3
  mls r3,r3,r2,r0
  cbnz r3,0x1011fa38
  movs r0,#0xb
  muls r0,r2
  uxtb r0,r0
  bx lr
  mov.w r3,#0x3e8
  udiv r0,r0,r3
  b 0x1011fa34
