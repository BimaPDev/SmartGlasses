; FUN_1011a628 @ 0x1011a628 size=14
  cbz r0,0x1011a634
  ldrb r0,[r0,#0xc]
  sub.w r3,r0,#0x10
  rsbs r0,r3
  adcs r0,r3
  bx lr
