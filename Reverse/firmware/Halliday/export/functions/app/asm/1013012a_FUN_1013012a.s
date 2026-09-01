; FUN_1013012a @ 0x1013012a size=18
  push {r0,r1,r4,lr}
  movs r4,#0x0
  str r4,[sp,#0x4]
  ldr r4,[sp,#0x10]
  str r4,[sp,#0x0]
  bl 0x101300e0
  add sp,#0x8
  pop {r4,pc}
