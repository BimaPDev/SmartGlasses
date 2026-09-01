; FUN_100c8c5c @ 0x100c8c5c size=24
  ldrh r3,[r0,#0x0]
  cbz r3,0x100c8c6e
  ldr r3,[r0,#0x0]
  ldr r2,[0x100c8c74]
  str r3,[r2,#0x0]
  ldr r3,[r0,#0x4]
  movs r0,#0x0
  str r3,[r2,#0x4]
  bx lr
  mvn r0,#0x15
  bx lr
