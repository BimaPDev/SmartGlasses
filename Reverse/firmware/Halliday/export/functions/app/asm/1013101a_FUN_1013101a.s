; FUN_1013101a @ 0x1013101a size=20
  ldrb r3,[r0,#0x0]
  cmp r3,r1
  beq 0x1013102c
  ldrb r3,[r0,#0xc]
  cmp r3,r1
  bne 0x1013102a
  adds r0,#0xc
  bx lr
  movs r0,#0x0
  bx lr
