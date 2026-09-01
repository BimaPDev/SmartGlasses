; FUN_100d3a28 @ 0x100d3a28 size=14
  ldr r3,[0x100d3a38]
  ldr r2,[r3,#0x0]
  ldrh r3,[r2,#0x2]
  bic.w r0,r3,r0
  strh r0,[r2,#0x2]
  bx lr
