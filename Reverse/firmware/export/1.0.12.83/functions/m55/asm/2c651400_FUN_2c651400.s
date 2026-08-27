; FUN_2c651400 @ 0x2c651400 size=24
  cmp r2,#0x1
  push {r4,r5}
  bne 0x2c65140e
  ldr r3,[r1,#0x0]
  str r3,[r0,#0x0]
  pop {r4,r5}
  bx lr
  cmp r2,#0x0
  beq 0x2c65140a
  pop {r4,r5}
  b.w 0x2c66ed22
