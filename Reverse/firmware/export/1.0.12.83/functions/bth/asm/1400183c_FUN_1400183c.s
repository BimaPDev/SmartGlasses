; FUN_1400183c @ 0x1400183c size=28
  ldr r2,[0x14001858]
  ldr r3,[r2,#0xc]
  lsls r3,r3,#0x1f
  bmi 0x1400183e
  ldr r3,[r2,#0x14]
  cbz r1,0x14001850
  orr r3,r3,#0x10
  str r3,[r2,#0x14]
  bx lr
  bic r3,r3,#0x10
  str r3,[r2,#0x14]
  bx lr
