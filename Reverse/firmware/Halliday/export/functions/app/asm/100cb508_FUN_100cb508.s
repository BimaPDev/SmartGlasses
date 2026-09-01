; FUN_100cb508 @ 0x100cb508 size=20
  ldr r3,[0x100cb51c]
  ldrb r2,[r3,#0x0]
  adds r2,#0x1
  ands r2,r2,#0xff
  it eq
  mov.eq r2,#0x1
  strb r2,[r3,#0x0]
  ldrb r0,[r3,#0x0]
  bx lr
