; FUN_100d6220 @ 0x100d6220 size=30
  ldr r3,[0x100d6240]
  ldr r3,[r3,#0x0]
  ldr r0,[r3,#0x0]
  movw r3,#0x481
  cbnz r0,0x100d622e
  bx lr
  ldrh r2,[r0,#0x38]
  bics.w r2,r3,r2
  bne 0x100d623a
  ldr r0,[r0,#0xc]
  bx lr
  ldr r0,[r0,#0x0]
  b 0x100d622a
