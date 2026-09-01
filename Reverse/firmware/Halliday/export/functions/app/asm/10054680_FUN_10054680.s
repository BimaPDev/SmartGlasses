; FUN_10054680 @ 0x10054680 size=20
  lsls r3,r1,#0x1c
  bpl 0x10054692
  ldr r3,[0x10054694]
  ldrb r3,[r0,r3]
  and r3,r3,#0x3
  cmp r3,#0x1
  it eq
  add.eq r0,#0x20
  bx lr
