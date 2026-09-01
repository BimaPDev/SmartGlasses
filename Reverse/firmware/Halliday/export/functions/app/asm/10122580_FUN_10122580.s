; FUN_10122580 @ 0x10122580 size=18
  subs r0,#0x1
  add r2,r1
  ldrb.w r3,[r1],#0x1
  cmp r1,r2
  strb.w r3,[r0,#0x1]!
  bne 0x10122584
  bx lr
