; FUN_10067f20 @ 0x10067f20 size=16
  ldr r3,[0x10067f30]
  ldr r0,[r3,#0x0]
  cbz r0,0x10067f2e
  ldr r3,[r0,#0x8]
  movs r1,#0x0
  ldr r3,[r3,#0xc]
  bx r3
  bx lr
