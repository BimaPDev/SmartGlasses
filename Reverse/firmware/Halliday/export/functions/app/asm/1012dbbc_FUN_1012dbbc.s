; FUN_1012dbbc @ 0x1012dbbc size=14
  ldrb.w r3,[r0,#0x28]
  bfi r3,r1,#0x2,#0x1
  strb.w r3,[r0,#0x28]
  bx lr
