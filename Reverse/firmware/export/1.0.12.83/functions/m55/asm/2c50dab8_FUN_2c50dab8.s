; FUN_2c50dab8 @ 0x2c50dab8 size=28
  push {r4,r5,lr}
  ldr r2,[0x2c50daf8]
  sub sp,#0x14
  mov r4,r1
  ldr r3,[0x2c50dafc]
  mov r5,r0
  ldr r1,[0x2c50db00]
  movs r0,#0x4
  str r4,[sp,#0x8]
  strd r2,r3,[sp,#0x0]
  movs r2,#0x80
  bl 0x2c62c82c
