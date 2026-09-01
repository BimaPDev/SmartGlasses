; FUN_10000be4 @ 0x10000be4 size=20
  ldr r3,[0x10000bf8]
  ldr r2,[r3,#0x0]
  ldr r3,[0x10000bfc]
  str.w r2,[r3,#0x100]
  ldr r2,[0x10000c00]
  ldr r2,[r2,#0x0]
  str.w r2,[r3,#0x104]
  bx lr
