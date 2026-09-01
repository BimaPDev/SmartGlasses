; FUN_10004000 @ 0x10004000 size=18
  str.w lr,[sp,#-0x8]!
  bl 0x10003fc8
  ite ls
  mov.ls r0,#0x1
  mov.hi r0,#0x0
  ldr.w pc,[sp],#0x8
