; FUN_140e3ce4 @ 0x140e3ce4 size=18
  str.w lr,[sp,#-0x8]!
  bl 0x140e3cc0
  ite cc
  mov.cc r0,#0x1
  mov.cs r0,#0x0
  ldr.w pc,[sp],#0x8
