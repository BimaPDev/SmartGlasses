; FUN_2c50a07c @ 0x2c50a07c size=34
  push {r4,r5,lr}
  sub sp,#0x14
  mov r4,r0
  bl 0x2c602410
  ldr r3,[0x2c50a174]
  ldr r1,[0x2c50a178]
  mov.w r2,#0x1a6
  mov r5,r0
  str r1,[sp,#0x0]
  ldr r1,[0x2c50a17c]
  strd r3,r0,[sp,#0x4]
  movs r0,#0x4
  bl 0x2c62c82c
