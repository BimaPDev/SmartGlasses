; FUN_2c4b9280 @ 0x2c4b9280 size=28
  push {r4,lr}
  ldr r1,[0x2c4b9350]
  sub sp,#0x10
  ldr r4,[0x2c4b9354]
  ldr r3,[0x2c4b9358]
  ldr r2,[0x2c4b935c]
  str r4,[sp,#0x0]
  strd r1,r0,[sp,#0x4]
  movw r1,#0x149a
  movs r0,#0x4
  bl 0x2c673d88
