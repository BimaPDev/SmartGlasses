; FUN_140da7a8 @ 0x140da7a8 size=26
  sub sp,#0x8
  vstr.32 s0,[sp,#0x4]
  ldr r0,[sp,#0x4]
  bic r0,r0,#0x80000000
  cmp.w r0,#0x7f800000
  ite ge
  mov.ge r0,#0x0
  mov.lt r0,#0x1
  add sp,#0x8
  bx lr
