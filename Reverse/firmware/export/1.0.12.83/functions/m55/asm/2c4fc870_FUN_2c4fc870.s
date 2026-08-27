; FUN_2c4fc870 @ 0x2c4fc870 size=30
  push {r4,lr}
  sub sp,#0x10
  ldr r4,[0x2c4fc894]
  bl 0x2c4fcdd4
  ldr r1,[0x2c4fc898]
  ldr r3,[0x2c4fc89c]
  ldr r2,[0x2c4fc8a0]
  str r4,[sp,#0x0]
  strd r1,r0,[sp,#0x4]
  movs r1,#0x1d
  movs r0,#0x4
  bl 0x2c673d88
