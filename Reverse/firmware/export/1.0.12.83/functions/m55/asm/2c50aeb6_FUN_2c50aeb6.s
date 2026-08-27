; FUN_2c50aeb6 @ 0x2c50aeb6 size=34
  push {r4,r5,lr}
  sub sp,#0x14
  mov r4,r0
  bl 0x2c602410
  ldr r3,[0x2c50af20]
  ldr r1,[0x2c50af24]
  mov r5,r0
  movw r2,#0x20b
  str r1,[sp,#0x0]
  ldr r1,[0x2c50af28]
  strd r3,r0,[sp,#0x4]
  movs r0,#0x4
  bl 0x2c62c82c
