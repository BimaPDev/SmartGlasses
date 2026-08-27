; FUN_2c64cdce @ 0x2c64cdce size=18
  ldr r2,[r0,#0x4]
  subs r1,r2,#0x1
  cmp r2,#0x1
  str r1,[r0,#0x4]
  bne 0x2c64cdde
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x4]
  bx r3
  bx lr
