; FUN_1400153c @ 0x1400153c size=20
  ldr r3,[0x14001550]
  ldr r0,[r3,#0xc]
  ands r0,r0,#0x1
  bne 0x1400153e
  ldr r2,[r3,#0x4]
  bic r2,r2,#0x2000000
  str r2,[r3,#0x4]
  bx lr
