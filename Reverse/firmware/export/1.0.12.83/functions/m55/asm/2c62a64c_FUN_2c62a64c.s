; FUN_2c62a64c @ 0x2c62a64c size=30
  ldrsh.w r3,[r0,#0x6]
  ldrsh.w r12,[r0,#0x2]
  ldrsh.w r2,[r0,#0x4]
  ldrsh.w r1,[r0,#0x0]
  sub.w r0,r3,r12
  subs r2,r2,r1
  adds r0,#0x1
  mla r0,r2,r0,r0
  bx lr
