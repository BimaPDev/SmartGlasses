; FUN_1011aa24 @ 0x1011aa24 size=16
  add.w r3,r0,#0xc8000000
  cmp.w r3,#0x4000000
  it cc
  add.cc.w r0,r0,#0xfc000000
  bx lr
