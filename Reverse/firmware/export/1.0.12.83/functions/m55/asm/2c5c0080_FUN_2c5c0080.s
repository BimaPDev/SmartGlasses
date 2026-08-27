; FUN_2c5c0080 @ 0x2c5c0080 size=28
  push {r4,r5,r6,lr}
  ldr r3,[0x2c5c0180]
  sub sp,#0x10
  ldr r5,[0x2c5c0184]
  mov r4,r0
  str r0,[sp,#0x8]
  movw r2,#0x227
  ldr r1,[0x2c5c0188]
  movs r0,#0x4
  str r3,[sp,#0x4]
  str r5,[sp,#0x0]
  bl 0x2c62c82c
