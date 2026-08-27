; FUN_2c003e40 @ 0x2c003e40 size=32
  ldr r3,[0x2c003e60]
  ldr.w r2,[r3,r0,lsl #0x2]
  ldr r3,[r2,#0xc]
  lsls r3,r3,#0x1f
  bmi 0x2c003e46
  ldr r3,[r2,#0x14]
  cbz r1,0x2c003e58
  orr r3,r3,#0x20
  str r3,[r2,#0x14]
  bx lr
  bic r3,r3,#0x20
  str r3,[r2,#0x14]
  bx lr
