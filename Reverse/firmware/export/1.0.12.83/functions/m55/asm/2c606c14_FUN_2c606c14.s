; FUN_2c606c14 @ 0x2c606c14 size=26
  ldr r0,[r0,#0x0]
  cbz r0,0x2c606c2c
  cmp r0,r1
  bne 0x2c606c22
  b 0x2c606c2a
  cmp r1,r0
  beq 0x2c606c2a
  ldr r0,[r0,#0x0]
  cmp r0,#0x0
  bne 0x2c606c1e
  bx lr
  movs r0,#0x1
  bx lr
