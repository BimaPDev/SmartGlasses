; FUN_2c66491a @ 0x2c66491a size=30
  cmp r2,#0x1
  push {r4,r5}
  bne 0x2c664928
  ldr r3,[r1,#0x0]
  str r3,[r0,#0x0]
  pop {r4,r5}
  bx lr
  cmp r2,#0x0
  beq 0x2c664924
  pop {r4,r5}
  b.w 0x2c66ed22
  lsls r2,r2,#0x2
  b.w 0x2c673eb8
