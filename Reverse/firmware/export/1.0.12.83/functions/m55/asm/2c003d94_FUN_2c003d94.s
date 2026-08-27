; FUN_2c003d94 @ 0x2c003d94 size=24
  ldr r3,[0x2c003dac]
  ldr.w r3,[r3,r0,lsl #0x2]
  ldr r2,[r3,#0xc]
  lsls r1,r2,#0x1f
  bmi 0x2c003d9a
  movs r2,#0x3
  str r2,[r3,#0x18]
  ldr r2,[r3,#0xc]
  lsls r2,r2,#0x1f
  bmi 0x2c003da4
  bx lr
