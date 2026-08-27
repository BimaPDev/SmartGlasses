; FUN_2c5e2fbc @ 0x2c5e2fbc size=30
  push {r4,r5,lr}
  movs r0,#0x10
  sub sp,#0x14
  ldr r5,[0x2c5e307c]
  ldr r1,[0x2c5e3080]
  ldr r3,[0x2c5e3084]
  ldr r2,[0x2c5e3088]
  str r1,[sp,#0x0]
  movs r1,#0x39
  ldr r4,[0x2c5e308c]
  strd r5,r0,[sp,#0x4]
  movs r0,#0x4
  bl 0x2c673d88
