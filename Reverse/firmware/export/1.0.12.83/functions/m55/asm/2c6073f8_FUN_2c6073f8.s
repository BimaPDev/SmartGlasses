; FUN_2c6073f8 @ 0x2c6073f8 size=12
  ldrh r3,[r0,#0x1a]
  ldrh r2,[r0,#0x16]
  adds r0,r3,#0x1
  subs r0,r0,r2
  sxth r0,r0
  bx lr
