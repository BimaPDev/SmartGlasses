; FUN_1011a644 @ 0x1011a644 size=14
  cbz r0,0x1011a650
  ldrb r0,[r0,#0xc]
  sub.w r3,r0,#0x40
  rsbs r0,r3
  adcs r0,r3
  bx lr
