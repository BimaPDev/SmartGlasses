; FUN_101225ae @ 0x101225ae size=24
  ubfx r3,r2,#0x8,#0x8
  strb r2,[r1,#0x1a]
  strb r3,[r1,#0x1b]
  ldrb r3,[r0,#0x0]
  cmp r3,#0x3
  itttt eq
  lsr.eq r2,r2,#0x10
  strb.eq r2,[r1,#0x14]
  lsr.eq r2,r2,#0x8
  strb.eq r2,[r1,#0x15]
  bx lr
