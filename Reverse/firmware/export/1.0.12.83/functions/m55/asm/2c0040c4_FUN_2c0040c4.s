; FUN_2c0040c4 @ 0x2c0040c4 size=30
  ldr r3,[0x2c0040e4]
  ldr.w r2,[r3,r0,lsl #0x2]
  ldr r0,[r2,#0x34]
  ands r0,r0,#0x100
  bne 0x2c0040e0
  ldr r3,[r2,#0x34]
  orr r3,r3,#0x100
  str r3,[r2,#0x34]
  ldr r3,[r2,#0xc]
  lsls r3,r3,#0x1f
  bmi 0x2c0040da
  bx lr
