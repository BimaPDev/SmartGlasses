; FUN_1011e910 @ 0x1011e910 size=16
  add.w r3,r0,#0xcc000000
  cmp.w r3,#0x8000000
  bcs 0x1011e91e
  b.w 0x1011a9aa
  bx lr
