; FUN_14001938 @ 0x14001938 size=12
  ldr r2,[0x14001944]
  ldr r3,[r2,#0x38]
  bic r3,r3,#0x1000
  str r3,[r2,#0x38]
  bx lr
