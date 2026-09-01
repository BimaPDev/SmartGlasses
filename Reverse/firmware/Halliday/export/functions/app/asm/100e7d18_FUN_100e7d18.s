; FUN_100e7d18 @ 0x100e7d18 size=22
  ldr r3,[0x100e7d30]
  ldr r2,[r3,#0x0]
  cmp r2,r0
  ittt eq
  ldrb.eq.w r2,[r3,#0x28]
  bic.eq r2,r2,#0x5
  strb.eq.w r2,[r3,#0x28]
  bx lr
