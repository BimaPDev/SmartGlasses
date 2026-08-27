; FUN_2c002f6c @ 0x2c002f6c size=16
  mov.w r2,#0x50000000
  movs r0,#0x0
  ldr r3,[r2,#0x5c]
  bic r3,r3,#0xc0000000
  str r3,[r2,#0x5c]
  bx lr
