; FUN_2c65e9c0 @ 0x2c65e9c0 size=24
  cmp r2,#0x1
  push {r4,r5}
  bne 0x2c65e9ce
  ldrb r3,[r1,#0x0]
  strb r3,[r0,#0x0]
  pop {r4,r5}
  bx lr
  cmp r2,#0x0
  beq 0x2c65e9ca
  pop {r4,r5}
  b.w 0x2c673eb8
