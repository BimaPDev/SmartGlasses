; FUN_2c604a2c @ 0x2c604a2c size=12
  ldr r0,[r0,#0x8]
  cbz r0,0x2c604a36
  ldrh r0,[r0,#0x10]
  rsbs r0,r0
  sxth r0,r0
  bx lr
