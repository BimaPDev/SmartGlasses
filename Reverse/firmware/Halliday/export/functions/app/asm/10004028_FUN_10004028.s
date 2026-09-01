; FUN_10004028 @ 0x10004028 size=18
  str.w lr,[sp,#-0x8]!
  bl 0x10003fb8
  ite cc
  mov.cc r0,#0x1
  mov.cs r0,#0x0
  ldr.w pc,[sp],#0x8
