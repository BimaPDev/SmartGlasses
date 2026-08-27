; FUN_2c4939c0 @ 0x2c4939c0 size=40
  push {r4,lr}
  ldr r1,[0x2c4939ec]
  sub sp,#0x10
  movs r0,#0x5
  ldr r4,[0x2c4939f0]
  bl 0x2c492880
  bl 0x2c4931b0
  ldr r1,[0x2c4939f4]
  ldr r3,[0x2c4939f8]
  ldr r2,[0x2c4939fc]
  str r4,[sp,#0x0]
  strd r1,r0,[sp,#0x4]
  mov.w r1,#0x308
  movs r0,#0x4
  bl 0x2c673d88
