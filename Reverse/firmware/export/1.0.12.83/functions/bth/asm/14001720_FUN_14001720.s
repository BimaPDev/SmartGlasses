; FUN_14001720 @ 0x14001720 size=18
  ldr r2,[0x14001734]
  ldr r3,[r2,#0xc]
  lsls r3,r3,#0x1f
  bmi 0x14001722
  ldr r3,[r2,#0x4]
  bic r3,r3,#0x1
  str r3,[r2,#0x4]
  bx lr
