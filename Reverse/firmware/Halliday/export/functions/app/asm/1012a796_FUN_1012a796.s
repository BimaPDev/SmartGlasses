; FUN_1012a796 @ 0x1012a796 size=28
  subs r2,r1,r2
  mov.w r1,#0x3e8
  cmp r2,#0x0
  it lt
  rsb.lt r2,r2
  muls r2,r1
  udiv r3,r2,r0
  cmp r2,r0
  it cc
  add.cc r3,#0x1
  mov r0,r3
  bx lr
