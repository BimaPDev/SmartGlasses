; FUN_100b9f30 @ 0x100b9f30 size=14
  movs r1,#0x83
  ldr r2,[0x100b9f40]
  ldr r3,[r2,#0x0]
  mla r0,r1,r3,r0
  str r0,[r2,#0x0]
  bx lr
