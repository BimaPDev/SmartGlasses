; FUN_100be38c @ 0x100be38c size=18
  ldr r3,[0x100be3a0]
  movs r1,#0x0
  ldrb r2,[r3,#0x14]
  orrs r0,r2
  strb r0,[r3,#0x14]
  add.w r0,r3,#0x50
  b.w 0x1011dc0a
