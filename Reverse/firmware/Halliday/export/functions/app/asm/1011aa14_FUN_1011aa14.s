; FUN_1011aa14 @ 0x1011aa14 size=16
  add.w r3,r0,#0xc4000000
  cmp.w r3,#0x4000000
  it cc
  add.cc.w r0,r0,#0xf8000000
  bx lr
