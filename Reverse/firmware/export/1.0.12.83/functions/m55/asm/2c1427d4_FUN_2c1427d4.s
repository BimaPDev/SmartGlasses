; FUN_2c1427d4 @ 0x2c1427d4 size=20
  ldrb.w r2,[r0],#0x1
  ldrb.w r3,[r1],#0x1
  cmp r2,#0x1
  it cs
  cmp.cs r2,r3
  beq 0x2c1427d4
  subs r0,r2,r3
  bx lr
