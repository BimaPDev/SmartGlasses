; FUN_1011e1f6 @ 0x1011e1f6 size=40
  push {r4,lr}
  sub sp,#0x18
  ldrh.w r4,[sp,#0x2c]
  str r4,[sp,#0x10]
  ldrh.w r4,[sp,#0x28]
  str r4,[sp,#0xc]
  movs r4,#0x4
  str r4,[sp,#0x8]
  ldrb.w r4,[sp,#0x24]
  str r4,[sp,#0x4]
  ldrh.w r4,[sp,#0x20]
  str r4,[sp,#0x0]
  bl 0x10066178
  add sp,#0x18
  pop {r4,pc}
