; FUN_1012f99a @ 0x1012f99a size=38
  cbz r0,0x1012f9ba
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
  mov.w r0,#0xffffffff
  bx lr
