; FUN_2c4fcb9c @ 0x2c4fcb9c size=44
  push {r4,r5,r6,r7,r8,r9,r10,lr}
  ldr r3,[0x2c4fcc14]
  sub sp,#0x10
  ldr.w r9,[0x2c4fcc24]
  mov.w r10,#0x1000
  ldr.w r8,[0x2c4fcc28]
  mov r5,r1
  ldr r7,[0x2c4fcc18]
  mov r6,r0
  ldr r4,[0x2c4fcc1c]
  mov r2,r8
  str r3,[sp,#0x0]
  movs r1,#0x50
  mov r3,r9
  str r7,[sp,#0x4]
  movs r0,#0x4
  bl 0x2c673d88
