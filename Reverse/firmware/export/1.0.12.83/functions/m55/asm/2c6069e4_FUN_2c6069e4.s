; FUN_2c6069e4 @ 0x2c6069e4 size=44
  push {r3,lr}
  bl 0x2c64331c
  bl 0x2c5eb6fc
  bl 0x2c62eb8c
  movs r0,#0x0
  bl 0x2c62a464
  bl 0x2c62be84
  ldr r3,[0x2c606a0c]
  movs r0,#0x0
  strb r0,[r3,#0x0]
  pop.w {r3,lr}
  b.w 0x2c62c820
  ldr r3,[0x2c62c828]
  str r0,[r3,#0x0]
  bx lr
