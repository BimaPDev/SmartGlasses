; FUN_100d6244 @ 0x100d6244 size=30
  ldr r3,[0x100d6264]
  ldr r3,[r3,#0x0]
  ldr r0,[r3,#0x0]
  movw r3,#0x181
  cbnz r0,0x100d6252
  bx lr
  ldrh r2,[r0,#0x38]
  bics.w r2,r3,r2
  bne 0x100d625e
  ldr r0,[r0,#0xc]
  bx lr
  ldr r0,[r0,#0x0]
  b 0x100d624e
