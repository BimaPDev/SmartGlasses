; FUN_10120060 @ 0x10120060 size=14
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x0]
  adds r3,#0x4
  ldr r2,[r3,#0x0]
  lsls r2,r2,#0x1b
  bpl 0x10120066
  bx lr
