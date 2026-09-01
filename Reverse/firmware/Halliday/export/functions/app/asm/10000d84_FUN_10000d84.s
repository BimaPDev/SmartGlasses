; FUN_10000d84 @ 0x10000d84 size=20
  ldr r3,[0x10000d98]
  ldr r2,[0x10000d9c]
  ldr.w r1,[r3,#0x2e8]
  str r1,[r2,#0x0]
  ldr.w r2,[r3,#0x2ec]
  ldr r3,[0x10000da0]
  str r2,[r3,#0x0]
  bx lr
