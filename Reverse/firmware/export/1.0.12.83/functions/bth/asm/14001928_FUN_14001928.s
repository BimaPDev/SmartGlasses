; FUN_14001928 @ 0x14001928 size=12
  ldr r2,[0x14001934]
  ldr r3,[r2,#0x38]
  orr r3,r3,#0x1000
  str r3,[r2,#0x38]
  bx lr
