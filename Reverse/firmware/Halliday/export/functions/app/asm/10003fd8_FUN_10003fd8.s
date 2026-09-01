; FUN_10003fd8 @ 0x10003fd8 size=18
  str.w lr,[sp,#-0x8]!
  bl 0x10003fc8
  ite eq
  mov.eq r0,#0x1
  mov.ne r0,#0x0
  ldr.w pc,[sp],#0x8
