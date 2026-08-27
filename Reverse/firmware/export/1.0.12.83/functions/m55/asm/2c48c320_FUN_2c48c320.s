; FUN_2c48c320 @ 0x2c48c320 size=34
  push {r4,r5,lr}
  ldr r4,[0x2c48c368]
  sub sp,#0xc
  ldr r1,[0x2c48c36c]
  ldrh r0,[r4,#0x0]
  ldr r3,[0x2c48c370]
  adds r0,#0x1
  ldr r2,[0x2c48c374]
  str r1,[sp,#0x0]
  movw r1,#0x20a
  uxth r0,r0
  str r0,[sp,#0x4]
  strh r0,[r4,#0x0]
  movs r0,#0x4
  bl 0x2c673d88
