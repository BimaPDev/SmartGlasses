; FUN_2c59c32c @ 0x2c59c32c size=38
  push {r4,r5,lr}
  ldr r3,[0x2c59c3b0]
  ldr r2,[0x2c59c3b4]
  ldr r4,[0x2c59c3b8]
  ldr r1,[0x2c59c3bc]
  vpush {d8}
  sub sp,#0x14
  vmov s16,r0
  movs r0,#0x4
  str r4,[sp,#0x0]
  ldr r4,[0x2c59c3c0]
  strd r2,r3,[sp,#0x4]
  movw r2,#0x49b
  bl 0x2c62c82c
