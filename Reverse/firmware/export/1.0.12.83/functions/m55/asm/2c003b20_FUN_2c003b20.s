; FUN_2c003b20 @ 0x2c003b20 size=28
  ldr r3,[0x2c003b3c]
  ldr.w r3,[r3,r0,lsl #0x2]
  ldr r0,[r3,#0xc]
  ands r0,r0,#0x1
  bne 0x2c003b26
  ldr r2,[r3,#0x4]
  bic r12,r2,#0xff0
  orr.w r1,r12,r1, lsl #0x4
  str r1,[r3,#0x4]
  bx lr
