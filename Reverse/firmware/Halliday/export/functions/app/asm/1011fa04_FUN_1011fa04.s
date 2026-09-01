; FUN_1011fa04 @ 0x1011fa04 size=30
  movs r3,#0xb
  udiv r2,r0,r3
  mls r3,r3,r2,r0
  tst r3,#0xff
  itete eq
  movw.eq r0,#0x2b11
  mov.ne.w r3,#0x3e8
  mul.eq r0,r2
  mul.ne r0,r3
  bx lr
