; FUN_2c003db0 @ 0x2c003db0 size=24
  ldr r3,[0x2c003dc8]
  ldr.w r3,[r3,r0,lsl #0x2]
  ldr r2,[r3,#0xc]
  lsls r1,r2,#0x1f
  bmi 0x2c003db6
  movs r2,#0x1
  str r2,[r3,#0x18]
  ldr r2,[r3,#0xc]
  lsls r2,r2,#0x1f
  bmi 0x2c003dc0
  bx lr
