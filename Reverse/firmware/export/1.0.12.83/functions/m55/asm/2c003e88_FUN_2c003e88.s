; FUN_2c003e88 @ 0x2c003e88 size=26
  ldr r3,[0x2c003ea4]
  ldr.w r2,[r3,r0,lsl #0x2]
  ldr r3,[r2,#0x14]
  cbz r1,0x2c003e9a
  orr r3,r3,#0x8
  str r3,[r2,#0x14]
  bx lr
  bic r3,r3,#0x8
  str r3,[r2,#0x14]
  bx lr
