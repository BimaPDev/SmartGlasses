; FUN_2c477300 @ 0x2c477300 size=24
  cbz r1,0x2c477316
  cbz r0,0x2c477316
  adds r2,r1,#0x6
  subs r0,#0x1
  ldrb.w r3,[r2,#-0x1]!
  mvns r3,r3
  cmp r2,r1
  strb.w r3,[r0,#0x1]!
  bne 0x2c477308
  bx lr
