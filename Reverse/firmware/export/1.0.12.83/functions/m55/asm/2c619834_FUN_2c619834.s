; FUN_2c619834 @ 0x2c619834 size=40
  push {lr}
  mov r0,r1
  sub sp,#0xc
  movs r1,#0x0
  str r0,[sp,#0x4]
  bl 0x2c627e28
  movs r3,#0x2
  ldr r0,[sp,#0x4]
  movs r1,#0x0
  mov r2,r3
  bl 0x2c627e50
  movs r1,#0x2
  ldr r0,[sp,#0x4]
  add sp,#0xc
  pop.w lr
  b.w 0x2c606abc
