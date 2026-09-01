; FUN_1013348a @ 0x1013348a size=26
  movs r3,#0x0
  ldr r2,[r0,#0x14]
  cbnz r2,0x10133498
  ldr r0,[r0,#0x1c]
  add r0,r3
  uxth r0,r0
  bx lr
  ldr r1,[r2,#0xc]
  ldr r2,[r2,#0x0]
  adds r1,#0x1
  add r3,r1
  uxth r3,r3
  b 0x1013348e
