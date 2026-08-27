; FUN_14002d3c @ 0x14002d3c size=16
  cbnz r0,0x14002d48
  ldr r2,[0x14002d4c]
  ldr r3,[r2,#0x0]
  bic r3,r3,#0x2
  str r3,[r2,#0x0]
  movs r0,#0x0
  bx lr
