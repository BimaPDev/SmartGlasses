; FUN_2c49381c @ 0x2c49381c size=34
  push {r4,r5,lr}
  ldr r4,[0x2c493844]
  sub sp,#0x14
  ldr r3,[0x2c493848]
  movw r1,#0x17b
  str r4,[sp,#0x0]
  adds r4,r0,#0x1
  ldr r2,[0x2c49384c]
  str r4,[sp,#0xc]
  ldr r5,[r0,#0x18]
  ldrb r4,[r0,#0x0]
  movs r0,#0x4
  str r5,[sp,#0x8]
  str r4,[sp,#0x4]
  bl 0x2c673d88
