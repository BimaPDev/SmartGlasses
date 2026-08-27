; FUN_2c003d6c @ 0x2c003d6c size=14
  ldr r3,[0x2c003d7c]
  ldr.w r2,[r3,r0,lsl #0x2]
  ldr r3,[r2,#0xc]
  lsls r3,r3,#0x1f
  bmi 0x2c003d72
  bx lr
