; FUN_140e3d0c @ 0x140e3d0c size=18
  str.w lr,[sp,#-0x8]!
  bl 0x140e3cb0
  ite ls
  mov.ls r0,#0x1
  mov.hi r0,#0x0
  ldr.w pc,[sp],#0x8
