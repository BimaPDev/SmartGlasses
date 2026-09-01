; FUN_1011a9aa @ 0x1011a9aa size=42
  add.w r3,r0,#0xf0000000
  cmp.w r3,#0x4000000
  bcs 0x1011a9ba
  add.w r0,r0,#0x4000000
  bx lr
  add.w r3,r0,#0xc8000000
  cmp.w r3,#0x4000000
  bcc 0x1011a9b4
  add.w r3,r0,#0xcc000000
  cmp.w r3,#0x4000000
  it cc
  add.cc.w r0,r0,#0x8000000
  bx lr
