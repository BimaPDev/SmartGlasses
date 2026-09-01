; FUN_1011fb60 @ 0x1011fb60 size=14
  movs r1,#0x2
  ldr r2,[r0,#0x4]
  ldr r3,[r0,#0x8]
  ldr r2,[r2,#0x8]
  ldr r3,[r3,#0x4]
  str r1,[r2,#0x4]
  bx r3
