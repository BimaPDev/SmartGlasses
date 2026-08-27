; FUN_1400181c @ 0x1400181c size=28
  ldr r2,[0x14001838]
  ldr r3,[r2,#0xc]
  lsls r3,r3,#0x1f
  bmi 0x1400181e
  ldr r3,[r2,#0x14]
  cbz r1,0x14001830
  orr r3,r3,#0x20
  str r3,[r2,#0x14]
  bx lr
  bic r3,r3,#0x20
  str r3,[r2,#0x14]
  bx lr
