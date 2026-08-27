; FUN_2c6521c2 @ 0x2c6521c2 size=20
  ldrd r2,r1,[r0,#0x8]
  cmp r2,r1
  bcs 0x2c6521d0
  adds r2,#0x1
  str r2,[r0,#0x8]
  bx lr
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x28]
  bx r3
