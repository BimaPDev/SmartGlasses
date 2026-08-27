; FUN_2c500278 @ 0x2c500278 size=30
  push {r4,r5,r6,r7,lr}
  ldr r3,[0x2c500308]
  sub sp,#0x14
  mov r5,r1
  ldr r0,[0x2c50030c]
  str r3,[sp,#0x4]
  mov.w r2,#0x258
  ldr r1,[0x2c500310]
  ldr r6,[0x2c500314]
  str r5,[sp,#0x8]
  str r0,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c62c82c
