; FUN_2c62fe2c @ 0x2c62fe2c size=30
  push {lr}
  mov r0,r1
  sub sp,#0xc
  movs r1,#0x10
  str r0,[sp,#0x4]
  bl 0x2c606abc
  mov.w r1,#0x400
  ldr r0,[sp,#0x4]
  add sp,#0xc
  pop.w lr
  b.w 0x2c606a28
