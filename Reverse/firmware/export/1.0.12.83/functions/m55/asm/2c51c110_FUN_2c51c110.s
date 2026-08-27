; FUN_2c51c110 @ 0x2c51c110 size=30
  push {r4,lr}
  mov r4,r0
  movs r1,#0x1
  ldr r0,[r0,#0xc]
  bl 0x2c606abc
  ldr r0,[r4,#0x10]
  movs r1,#0x1
  bl 0x2c606abc
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x2c51bfe8
