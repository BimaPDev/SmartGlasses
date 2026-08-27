; FUN_2c003d24 @ 0x2c003d24 size=22
  ldr r3,[0x2c003d3c]
  ldr.w r2,[r3,r0,lsl #0x2]
  ldr r3,[r2,#0xc]
  lsls r3,r3,#0x1f
  bmi 0x2c003d2a
  ldr r3,[r2,#0x4]
  bic r3,r3,#0x1
  str r3,[r2,#0x4]
  bx lr
