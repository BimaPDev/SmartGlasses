; FUN_2c003dcc @ 0x2c003dcc size=24
  ldr r3,[0x2c003de4]
  ldr.w r3,[r3,r0,lsl #0x2]
  ldr r2,[r3,#0xc]
  lsls r1,r2,#0x1f
  bmi 0x2c003dd2
  movs r2,#0x2
  str r2,[r3,#0x18]
  ldr r2,[r3,#0xc]
  lsls r2,r2,#0x1f
  bmi 0x2c003ddc
  bx lr
