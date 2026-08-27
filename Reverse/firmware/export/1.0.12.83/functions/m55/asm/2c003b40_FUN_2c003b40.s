; FUN_2c003b40 @ 0x2c003b40 size=24
  ldr r3,[0x2c003b58]
  ldr.w r3,[r3,r0,lsl #0x2]
  ldr r0,[r3,#0xc]
  ands r0,r0,#0x1
  bne 0x2c003b46
  ldr r2,[r3,#0x4]
  bic r2,r2,#0x2000000
  str r2,[r3,#0x4]
  bx lr
