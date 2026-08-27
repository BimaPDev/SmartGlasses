; FUN_2c62fb04 @ 0x2c62fb04 size=36
  push {lr}
  sub sp,#0xc
  str r3,[r0,#0x24]
  str r0,[sp,#0x4]
  bl 0x2c606abc
  ldr r0,[sp,#0x4]
  movs r1,#0x8
  bl 0x2c606a28
  mov.w r1,#0x400
  ldr r0,[sp,#0x4]
  add sp,#0xc
  pop.w lr
  b.w 0x2c606a28
