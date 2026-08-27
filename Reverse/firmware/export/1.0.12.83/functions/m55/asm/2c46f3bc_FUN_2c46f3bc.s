; FUN_2c46f3bc @ 0x2c46f3bc size=34
  push {r4,r5,lr}
  sub sp,#0x14
  bl 0x2c478b68
  cbz r0,0x2c46f408
  ldr r5,[0x2c46f40c]
  mov r4,r0
  ldr r2,[0x2c46f410]
  movw r1,#0x4ce
  ldr r3,[0x2c46f414]
  movs r0,#0x4
  str r5,[sp,#0x0]
  bl 0x2c673d88
  add sp,#0x14
  pop {r4,r5,pc}
