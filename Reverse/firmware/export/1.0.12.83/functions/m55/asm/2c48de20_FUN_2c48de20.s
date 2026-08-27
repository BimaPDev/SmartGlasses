; FUN_2c48de20 @ 0x2c48de20 size=20
  cbz r0,0x2c48de2e
  ldrb r3,[r0,#0xc]
  cmp r3,#0x8
  bne 0x2c48de2e
  vldr.64 d0,[r0,#0x18]
  bx lr
  vldr.64 d0,[pc,#0x8]
  bx lr
