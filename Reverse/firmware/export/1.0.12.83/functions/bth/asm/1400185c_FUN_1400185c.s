; FUN_1400185c @ 0x1400185c size=22
  ldr r2,[0x14001874]
  ldr r3,[r2,#0x14]
  cbz r1,0x1400186a
  orr r3,r3,#0x8
  str r3,[r2,#0x14]
  bx lr
  bic r3,r3,#0x8
  str r3,[r2,#0x14]
  bx lr
