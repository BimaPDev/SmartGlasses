; FUN_2c5167fc @ 0x2c5167fc size=32
  push {r4,lr}
  mov r4,r0
  movs r1,#0x80
  ldr r0,[r0,#0x0]
  bl 0x2c606b80
  ldr r0,[r4,#0x4]
  movs r1,#0x80
  bl 0x2c606b80
  ldr r0,[r4,#0x54]
  movs r1,#0x80
  pop.w {r4,lr}
  b.w 0x2c606b80
