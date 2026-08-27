; FUN_14001a2c @ 0x14001a2c size=28
  ldr r2,[0x14001a48]
  ldr r3,[r2,#0xc]
  lsls r3,r3,#0x1f
  bmi 0x14001a2e
  ldr r3,[r2,#0x40]
  cbz r1,0x14001a40
  orr r3,r3,#0xc
  str r3,[r2,#0x40]
  bx lr
  bic r3,r3,#0xc
  str r3,[r2,#0x40]
  bx lr
