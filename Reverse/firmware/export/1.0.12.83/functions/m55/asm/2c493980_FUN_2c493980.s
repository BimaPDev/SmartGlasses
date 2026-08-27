; FUN_2c493980 @ 0x2c493980 size=40
  push {r4,lr}
  ldr r1,[0x2c4939ac]
  sub sp,#0x10
  movs r0,#0x4
  ldr r4,[0x2c4939b0]
  bl 0x2c492880
  bl 0x2c4931b0
  ldr r1,[0x2c4939b4]
  ldr r3,[0x2c4939b8]
  ldr r2,[0x2c4939bc]
  str r4,[sp,#0x0]
  strd r1,r0,[sp,#0x4]
  movw r1,#0x2f7
  movs r0,#0x4
  bl 0x2c673d88
