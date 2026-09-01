; FUN_100c9c68 @ 0x100c9c68 size=30
  ldrb r3,[r0,#0x2]
  cmp r3,#0x2
  beq 0x100c9c82
  ldr r3,[0x100c9c88]
  ldrh.w r2,[r3,#0xdc]
  add.w r0,r3,#0x104
  adds r3,#0xe0
  cmp r2,#0x0
  it ne
  mov.ne r0,r3
  bx lr
  ldr r0,[0x100c9c8c]
  bx lr
