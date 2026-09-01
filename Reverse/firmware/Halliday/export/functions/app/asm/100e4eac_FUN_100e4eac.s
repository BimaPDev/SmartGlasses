; FUN_100e4eac @ 0x100e4eac size=30
  ldr r2,[0x100e4ecc]
  ldr r3,[r2,#0x0]
  cbz r3,0x100e4eb8
  ldr r3,[r2,#0x1c]
  cbnz r3,0x100e4ec6
  movs r3,#0x1
  movs r0,#0x1c
  mla r0,r0,r3,r2
  orn r3,r3,#0x7f
  strb r3,[r0,#0x9]
  bx lr
  movs r0,#0x0
  bx lr
