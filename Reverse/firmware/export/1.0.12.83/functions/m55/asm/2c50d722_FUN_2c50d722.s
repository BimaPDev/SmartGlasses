; FUN_2c50d722 @ 0x2c50d722 size=30
  push {r4,lr}
  sub sp,#0x10
  mov r4,r0
  bl 0x2c602410
  ldr r3,[0x2c50d780]
  ldr r1,[0x2c50d784]
  movs r2,#0x56
  strd r3,r0,[sp,#0x4]
  str r1,[sp,#0x0]
  movs r0,#0x4
  ldr r1,[0x2c50d788]
  bl 0x2c62c82c
