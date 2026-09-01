; FUN_100d50e4 @ 0x100d50e4 size=30
  ldr r3,[0x100d5104]
  ldr r3,[r3,#0x0]
  ldr r0,[r3,#0x0]
  cbnz r0,0x100d50ee
  bx lr
  ldrh r3,[r0,#0x38]
  and r3,r3,#0x480
  cmp.w r3,#0x400
  bne 0x100d50fe
  ldr r0,[r0,#0xc]
  bx lr
  ldr r0,[r0,#0x0]
  b 0x100d50ea
