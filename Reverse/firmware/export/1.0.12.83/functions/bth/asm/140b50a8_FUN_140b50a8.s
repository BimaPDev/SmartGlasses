; FUN_140b50a8 @ 0x140b50a8 size=32
  push {r4,lr}
  sub sp,#0x10
  ldr r4,[sp,#0x18]
  str r4,[sp,#0x0]
  ldrh.w r4,[sp,#0x1c]
  str r4,[sp,#0x4]
  ldr r4,[sp,#0x20]
  str r4,[sp,#0x8]
  ldrb.w r4,[sp,#0x24]
  str r4,[sp,#0xc]
  bl 0x140e5298
  add sp,#0x10
  pop {r4,pc}
