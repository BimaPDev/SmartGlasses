; FUN_10138392 @ 0x10138392 size=18
  ldr r1,[r0,#0x0]
  ldrb r3,[r0,#0x4]
  ldrb r2,[r1,r3]
  cmp r2,#0x20
  beq 0x1013839e
  bx lr
  adds r3,#0x1
  strb r3,[r0,#0x4]
  b 0x10138394
