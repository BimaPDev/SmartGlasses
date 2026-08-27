; FUN_2c4e4d02 @ 0x2c4e4d02 size=36
  push {r0,r1,r2,r4,r5,lr}
  adds r1,#0x3
  mov r5,r0
  bic r2,r1,#0x3
  mov r0,r2
  str r2,[sp,#0x4]
  bl 0x2c669578
  mov r4,r0
  mov r1,r0
  ldr r2,[sp,#0x4]
  mov r0,r5
  bl 0x2c4e4e98
  mov r0,r4
  add sp,#0xc
  pop {r4,r5,pc}
