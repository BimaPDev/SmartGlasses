; FUN_140001bc @ 0x140001bc size=16
  mov.w r2,#0x40000000
  ldr r3,[r2,#0x5c]
  movs r0,#0x0
  bic r3,r3,#0x60000000
  str r3,[r2,#0x5c]
  bx lr
