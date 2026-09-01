; FUN_10003fec @ 0x10003fec size=18
  str.w lr,[sp,#-0x8]!
  bl 0x10003fc8
  ite cc
  mov.cc r0,#0x1
  mov.cs r0,#0x0
  ldr.w pc,[sp],#0x8
