; FUN_2c50e298 @ 0x2c50e298 size=28
  push {r4,r5,lr}
  ldr r3,[0x2c50e2e8]
  sub sp,#0x14
  mov r4,r1
  ldr r2,[0x2c50e2ec]
  ldr r1,[0x2c50e2f0]
  mov r5,r0
  str r4,[sp,#0x8]
  movs r0,#0x4
  strd r2,r3,[sp,#0x0]
  movs r2,#0xf0
  bl 0x2c62c82c
