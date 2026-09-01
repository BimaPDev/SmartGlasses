; FUN_10000d40 @ 0x10000d40 size=20
  ldr r3,[0x10000d54]
  ldr.w r3,[r3,#0x2f0]
  cbz r3,0x10000d52
  mov.w r3,#0x1000
  ldr r2,[0x10000d58]
  str r3,[r2,#0x0]
  str r3,[r2,#0x4]
  bx lr
