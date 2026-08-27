; FUN_2c482a9c @ 0x2c482a9c size=26
  cbz r1,0x2c482ab4
  cbz r0,0x2c482ab4
  subs r2,r1,#0x1
  subs r0,#0x1
  adds r1,#0x5
  ldrb.w r3,[r2,#0x1]!
  mvns r3,r3
  cmp r2,r1
  strb.w r3,[r0,#0x1]!
  bne 0x2c482aa6
  bx lr
