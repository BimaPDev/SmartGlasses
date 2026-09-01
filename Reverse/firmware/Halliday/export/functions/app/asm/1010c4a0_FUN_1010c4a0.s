; FUN_1010c4a0 @ 0x1010c4a0 size=16
  ldr r3,[0x1010c4b0]
  ldr r2,[r3,#0x0]
  cbz r2,0x1010c4ac
  str r0,[r3,#0x0]
  movs r0,#0x0
  bx lr
  movs r0,#0x1
  bx lr
