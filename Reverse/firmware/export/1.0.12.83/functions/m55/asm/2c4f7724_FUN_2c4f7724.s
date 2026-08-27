; FUN_2c4f7724 @ 0x2c4f7724 size=30
  push {r4,r5,r6,lr}
  ldr r2,[0x2c4f77d0]
  sub sp,#0x10
  mov r4,r3
  ldr r6,[0x2c4f77d4]
  ldr r3,[0x2c4f77d8]
  mov r5,r0
  movs r1,#0x35
  movs r0,#0x4
  str r4,[sp,#0x8]
  strd r2,r6,[sp,#0x0]
  ldr r2,[0x2c4f77dc]
  bl 0x2c673d88
