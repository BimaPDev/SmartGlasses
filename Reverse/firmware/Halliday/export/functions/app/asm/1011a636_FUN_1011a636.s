; FUN_1011a636 @ 0x1011a636 size=14
  cbz r0,0x1011a642
  ldrb r0,[r0,#0xc]
  sub.w r3,r0,#0x20
  rsbs r0,r3
  adcs r0,r3
  bx lr
