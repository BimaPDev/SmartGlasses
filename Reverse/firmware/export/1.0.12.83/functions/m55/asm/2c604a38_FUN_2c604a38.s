; FUN_2c604a38 @ 0x2c604a38 size=12
  ldr r0,[r0,#0x8]
  cbz r0,0x2c604a42
  ldrh r0,[r0,#0x12]
  rsbs r0,r0
  sxth r0,r0
  bx lr
