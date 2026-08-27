; FUN_2c003e64 @ 0x2c003e64 size=32
  ldr r3,[0x2c003e84]
  ldr.w r2,[r3,r0,lsl #0x2]
  ldr r3,[r2,#0xc]
  lsls r3,r3,#0x1f
  bmi 0x2c003e6a
  ldr r3,[r2,#0x14]
  cbz r1,0x2c003e7c
  orr r3,r3,#0x10
  str r3,[r2,#0x14]
  bx lr
  bic r3,r3,#0x10
  str r3,[r2,#0x14]
  bx lr
