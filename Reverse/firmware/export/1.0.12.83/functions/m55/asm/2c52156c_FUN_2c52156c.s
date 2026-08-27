; FUN_2c52156c @ 0x2c52156c size=40
  push {r4,r5,r6,r7,lr}
  mov r0,r2
  ldr r5,[0x2c521620]
  ldr r4,[0x2c521624]
  mov.w r2,#0x204
  mov r6,r3
  mov r3,r5
  vpush {d8}
  sub sp,#0xc
  vmov s16,r0
  movs r0,#0x4
  str r5,[sp,#0x4]
  str r4,[sp,#0x0]
  mov r4,r1
  ldr r1,[0x2c521628]
  bl 0x2c62c82c
