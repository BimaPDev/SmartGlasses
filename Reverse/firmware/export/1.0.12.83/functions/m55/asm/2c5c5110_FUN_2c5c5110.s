; FUN_2c5c5110 @ 0x2c5c5110 size=40
  push {r4,r5,r6,lr}
  mov r4,r0
  sub sp,#0x10
  bl 0x2c5e9014
  ldr r3,[0x2c5c517c]
  ldrb.w r2,[r4,#0x32]
  mov r6,r0
  str r3,[sp,#0x0]
  movs r0,#0x4
  str r2,[sp,#0x8]
  mov r5,r1
  ldr r2,[r4,#0x0]
  ldr r3,[0x2c5c5180]
  ldr r1,[0x2c5c5184]
  str r2,[sp,#0x4]
  movs r2,#0xa1
  bl 0x2c62c82c
