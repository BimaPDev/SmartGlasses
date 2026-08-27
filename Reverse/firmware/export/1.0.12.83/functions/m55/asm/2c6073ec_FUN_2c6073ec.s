; FUN_2c6073ec @ 0x2c6073ec size=12
  ldrh r3,[r0,#0x18]
  ldrh r2,[r0,#0x14]
  adds r0,r3,#0x1
  subs r0,r0,r2
  sxth r0,r0
  bx lr
