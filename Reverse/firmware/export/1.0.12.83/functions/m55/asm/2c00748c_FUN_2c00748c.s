; FUN_2c00748c @ 0x2c00748c size=16
  ldr r2,[0x2c00749c]
  ldr.w r3,[r2,#0x150]
  bic r3,r3,#0x1f
  str.w r3,[r2,#0x150]
  bx lr
