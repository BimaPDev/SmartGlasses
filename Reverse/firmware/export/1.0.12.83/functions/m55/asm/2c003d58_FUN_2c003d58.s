; FUN_2c003d58 @ 0x2c003d58 size=14
  ldr r3,[0x2c003d68]
  ldr.w r2,[r3,r0,lsl #0x2]
  ldr r3,[r2,#0xc]
  lsls r3,r3,#0x1c
  bmi 0x2c003d5e
  bx lr
