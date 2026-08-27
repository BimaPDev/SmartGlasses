; FUN_140390a0 @ 0x140390a0 size=14
  cbz r0,0x140390ac
  ldr r2,[r0,#0x0]
  ldr r3,[0x140390b0]
  str r2,[r3,#0x0]
  ldrh r2,[r0,#0x4]
  strh r2,[r3,#0x4]
  bx lr
