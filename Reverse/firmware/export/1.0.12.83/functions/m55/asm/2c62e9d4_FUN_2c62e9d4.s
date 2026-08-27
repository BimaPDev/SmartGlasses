; FUN_2c62e9d4 @ 0x2c62e9d4 size=30
  subs r2,r1,r2
  mov.w r3,#0x3e8
  cmp r2,#0x0
  it lt
  rsb.lt r2,r2
  mul r2,r3,r2
  udiv r3,r2,r0
  cmp r2,r0
  it cc
  add.cc r3,#0x1
  mov r0,r3
  bx lr
