; FUN_100573f4 @ 0x100573f4 size=34
  ldr r3,[0x10057418]
  ldrb r2,[r3,#0x4]
  cmp r0,r2
  beq 0x1005740e
  ldrb r2,[r3,#0x1c]
  cmp r0,r2
  bne 0x10057412
  movs r0,#0x1
  movs r2,#0x18
  mla r0,r2,r0,r3
  adds r0,#0x4
  bx lr
  movs r0,#0x0
  b 0x10057404
  movs r0,#0x0
  bx lr
