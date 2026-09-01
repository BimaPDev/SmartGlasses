; FUN_100e7cf8 @ 0x100e7cf8 size=26
  ldr r2,[0x100e7d14]
  ldr r3,[r2,#0x0]
  cmp r3,r0
  itttt eq
  ldrb.eq.w r3,[r2,#0x28]
  bic.eq r3,r3,#0x3
  orr.eq r3,r3,#0x1
  strb.eq.w r3,[r2,#0x28]
  bx lr
