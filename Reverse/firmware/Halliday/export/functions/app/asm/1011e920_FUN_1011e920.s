; FUN_1011e920 @ 0x1011e920 size=16
  add.w r0,r0,#0xcc000000
  cmp.w r0,#0x8000000
  ite cs
  mov.cs r0,#0x0
  mov.cc r0,#0x1
  bx lr
