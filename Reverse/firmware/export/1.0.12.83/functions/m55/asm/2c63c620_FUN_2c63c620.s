; FUN_2c63c620 @ 0x2c63c620 size=16
  ldr r2,[0x2c63c630]
  ldrb r3,[r2,#0x0]
  cbnz r3,0x2c63c62e
  movs r0,#0x1
  ldr r1,[0x2c63c634]
  strb r0,[r2,#0x0]
  strb r3,[r1,#0x0]
  bx lr
