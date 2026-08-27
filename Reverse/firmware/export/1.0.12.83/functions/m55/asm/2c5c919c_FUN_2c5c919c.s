; FUN_2c5c919c @ 0x2c5c919c size=28
  ldr r3,[r0,#0x0]
  ldr r2,[0x2c5c91b8]
  ldr r3,[r3,#0x14]
  cmp r3,r2
  bne 0x2c5c91b6
  push {r4,lr}
  bl 0x2c5d78f0
  ldr r1,[0x2c5c91bc]
  pop.w {r4,lr}
  b.w 0x2c5d7a44
  bx r3
