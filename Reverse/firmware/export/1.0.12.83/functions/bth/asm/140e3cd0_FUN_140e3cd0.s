; FUN_140e3cd0 @ 0x140e3cd0 size=18
  str.w lr,[sp,#-0x8]!
  bl 0x140e3cc0
  ite eq
  mov.eq r0,#0x1
  mov.ne r0,#0x0
  ldr.w pc,[sp],#0x8
