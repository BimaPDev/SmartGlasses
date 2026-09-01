; FUN_1011e4ee @ 0x1011e4ee size=14
  ldrh r3,[r0,#0x4]
  ldrh r2,[r0,#0x0]
  add r3,r1
  subs r3,r3,r2
  strh r3,[r0,#0x4]
  strh r1,[r0,#0x0]
  bx lr
