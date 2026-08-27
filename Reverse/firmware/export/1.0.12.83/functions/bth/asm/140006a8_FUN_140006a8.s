; FUN_140006a8 @ 0x140006a8 size=40
  lsls r0,r1,#0x4
  str r1,[r3,#0x14]
  ldr r1,[r3,#0x24]
  orr r1,r1,#0x40000
  str r1,[r3,#0x24]
  strb r2,[r3,#0x1a]
  ldr r1,[r3,#0x24]
  orr r1,r1,#0x20000
  str r1,[r3,#0x24]
  strb r2,[r3,#0x19]
  ldr r1,[r3,#0x24]
  orr r1,r1,#0x10000
  str r1,[r3,#0x24]
  strb r2,[r3,#0x18]
  strb.w r2,[r3,#0x20]
  bx lr
