; FUN_2c003c84 @ 0x2c003c84 size=28
  ldr r3,[0x2c003ca0]
  ldr.w r0,[r3,r0,lsl #0x2]
  ldr r3,[r0,#0xc]
  lsls r3,r3,#0x1f
  bmi 0x2c003c8a
  ldr r3,[r0,#0x4]
  orr.w r1,r1,r2, lsl #0x8
  bic r3,r3,#0x1
  str r3,[r0,#0x4]
  str r1,[r0,#0x0]
  bx lr
