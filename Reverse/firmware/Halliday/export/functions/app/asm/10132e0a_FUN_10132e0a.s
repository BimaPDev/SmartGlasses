; FUN_10132e0a @ 0x10132e0a size=30
  mov r3,r0
  tst r0,#0x8000
  ite eq
  mov.eq r0,#0x7
  mov.ne r0,#0x6
  lsls r2,r3,#0xf
  it mi
  and.mi r0,r0,#0x5
  lsls r3,r3,#0xe
  it mi
  and.mi r0,r0,#0xfb
  bx lr
