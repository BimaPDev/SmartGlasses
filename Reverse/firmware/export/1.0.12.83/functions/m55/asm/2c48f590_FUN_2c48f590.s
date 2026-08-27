; FUN_2c48f590 @ 0x2c48f590 size=32
  push {r4,lr}
  ldr r4,[0x2c48f5b8]
  sub sp,#0x10
  ldr r2,[0x2c48f5bc]
  ldrb r1,[r4,#0x0]
  ldr r0,[0x2c48f5c0]
  str r2,[sp,#0x4]
  str r0,[sp,#0x0]
  movs r0,#0x4
  str r1,[sp,#0x8]
  movw r1,#0x181
  ldr r3,[0x2c48f5c4]
  ldr r2,[0x2c48f5c8]
  bl 0x2c673d88
