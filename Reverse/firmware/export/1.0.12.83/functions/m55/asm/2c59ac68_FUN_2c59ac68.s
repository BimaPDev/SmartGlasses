; FUN_2c59ac68 @ 0x2c59ac68 size=32
  push {r4,r5,lr}
  ldr r3,[0x2c59acc8]
  sub sp,#0x14
  ldr r2,[0x2c59accc]
  mov r4,r0
  ldr r5,[0x2c59acd0]
  movs r0,#0x4
  ldr r1,[0x2c59acd4]
  str r5,[sp,#0x0]
  add.w r5,r4,#0x30
  strd r2,r3,[sp,#0x4]
  movs r2,#0x40
  bl 0x2c62c82c
