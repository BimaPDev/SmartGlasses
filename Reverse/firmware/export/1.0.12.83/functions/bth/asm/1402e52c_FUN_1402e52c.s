; FUN_1402e52c @ 0x1402e52c size=20
  mov.w r1,#0x10000
  movs r2,#0x8
  ldr r3,[0x1402e540]
  str r1,[r3,#0x14]
  ldr r1,[r3,#0x0]
  str.w r2,[r3,#0xcc]
  ldr r3,[r3,#0x0]
  bx lr
