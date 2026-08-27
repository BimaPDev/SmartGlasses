; FUN_14010ef0 @ 0x14010ef0 size=30
  push {r4,r5,lr}
  sub sp,#0x14
  ldr r4,[sp,#0x20]
  ldrh.w r5,[sp,#0x24]
  str r4,[sp,#0x0]
  movs r4,#0x0
  str r5,[sp,#0x4]
  ldr r5,[sp,#0x28]
  strd r5,r4,[sp,#0x8]
  bl 0x14010f10
  add sp,#0x14
  pop {r4,r5,pc}
