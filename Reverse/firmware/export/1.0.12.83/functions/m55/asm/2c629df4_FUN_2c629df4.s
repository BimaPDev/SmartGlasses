; FUN_2c629df4 @ 0x2c629df4 size=18
  ldr r2,[0x2c629e08]
  movs r1,#0x1
  ldr r3,[0x2c629e0c]
  ldr r0,[r2,#0x0]
  strb r1,[r3,#0x0]
  ldrb r2,[r3,#0x0]
  cmp r2,#0x0
  beq 0x2c629dfc
  bx lr
