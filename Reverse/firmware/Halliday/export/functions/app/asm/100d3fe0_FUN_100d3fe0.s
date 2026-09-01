; FUN_100d3fe0 @ 0x100d3fe0 size=14
  ldr r3,[0x100d3ff0]
  ldr r3,[r3,#0x0]
  ldrb r2,[r3,#0x0]
  bfi r2,r0,#0x1,#0x1
  strb r2,[r3,#0x0]
  bx lr
