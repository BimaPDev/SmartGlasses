; FUN_1007676c @ 0x1007676c size=26
  ldr r3,[r0,#0x4]
  movs r0,#0x0
  ldr r2,[r3,#0x0]
  ldr r3,[r2,#0xc]
  bic r3,r3,#0x3
  str r3,[r2,#0xc]
  ldr r2,[0x10076788]
  ldr r3,[r2,#0x0]
  bic r3,r3,#0x1000000
  str r3,[r2,#0x0]
  bx lr
