; FUN_100d50c0 @ 0x100d50c0 size=30
  ldr r3,[0x100d50e0]
  ldr r3,[r3,#0x0]
  ldr r0,[r3,#0x0]
  cbnz r0,0x100d50ca
  bx lr
  ldrb.w r3,[r0,#0x38]
  and r3,r3,#0x81
  cmp r3,#0x1
  bne 0x100d50da
  ldr r0,[r0,#0xc]
  bx lr
  ldr r0,[r0,#0x0]
  b 0x100d50c6
