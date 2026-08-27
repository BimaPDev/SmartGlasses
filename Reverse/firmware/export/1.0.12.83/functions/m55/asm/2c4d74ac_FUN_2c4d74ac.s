; FUN_2c4d74ac @ 0x2c4d74ac size=26
  push {r4}
  str r3,[r0,#0x0]
  movs r4,#0x0
  lsls r3,r2,#0x3
  str r4,[r0,#0xc]
  str r3,[r0,#0x18]
  strd r4,r4,[r0,#0x4]
  strd r1,r2,[r0,#0x10]
  pop.w r4
  bx lr
