; FUN_140b3838 @ 0x140b3838 size=40
  push {lr}
  ldr r0,[0x140b3860]
  sub sp,#0xc
  movw r1,#0x377
  ldr r3,[0x140b3864]
  ldr r2,[0x140b3868]
  str r0,[sp,#0x0]
  movs r0,#0x4
  bl 0x1402a6e8
  mov.w r0,#0x400000
  bl 0x14027be8
  add sp,#0xc
  pop.w lr
  b.w 0x140b35fc
