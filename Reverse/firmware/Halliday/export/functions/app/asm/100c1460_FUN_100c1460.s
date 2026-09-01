; FUN_100c1460 @ 0x100c1460 size=14
  ldr r3,[0x100c1470]
  ldr.w r2,[r3,#0x17]!
  str r2,[r0,#0x0]
  ldrh r3,[r3,#0x4]
  strh r3,[r0,#0x4]
  bx lr
