; FUN_10121a18 @ 0x10121a18 size=20
  ldr r3,[r0,#0xc]
  ldrh.w r2,[r3,#0x7e]
  adds r2,#0x1
  strh.w r2,[r3,#0x7e]
  movs r2,#0x0
  ldr r3,[r3,#0x74]
  strh r2,[r3,#0x6]
  bx lr
