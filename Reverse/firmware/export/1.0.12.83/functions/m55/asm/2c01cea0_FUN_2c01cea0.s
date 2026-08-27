; FUN_2c01cea0 @ 0x2c01cea0 size=30
  push {r4,lr}
  sub sp,#0x10
  ldr r4,[sp,#0x18]
  str r4,[sp,#0x0]
  ldrh.w r4,[sp,#0x1c]
  str r4,[sp,#0x4]
  ldr r4,[sp,#0x20]
  str r4,[sp,#0x8]
  movs r4,#0x0
  str r4,[sp,#0xc]
  bl 0x2c01cec0
  add sp,#0x10
  pop {r4,pc}
