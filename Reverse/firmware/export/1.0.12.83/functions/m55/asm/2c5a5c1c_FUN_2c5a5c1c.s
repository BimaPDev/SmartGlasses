; FUN_2c5a5c1c @ 0x2c5a5c1c size=30
  push {r4,r5,r6,lr}
  ldr r6,[0x2c5a5c60]
  sub sp,#0x10
  ldr r3,[0x2c5a5c64]
  mov.w r2,#0x390
  mov r4,r0
  mov r5,r1
  str r6,[sp,#0x0]
  strd r0,r1,[sp,#0x4]
  ldr r1,[0x2c5a5c68]
  movs r0,#0x4
  bl 0x2c62c82c
