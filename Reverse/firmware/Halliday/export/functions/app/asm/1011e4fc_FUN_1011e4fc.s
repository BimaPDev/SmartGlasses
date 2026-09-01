; FUN_1011e4fc @ 0x1011e4fc size=14
  ldrh r3,[r0,#0x6]
  ldrh r2,[r0,#0x2]
  add r3,r1
  subs r3,r3,r2
  strh r3,[r0,#0x6]
  strh r1,[r0,#0x2]
  bx lr
