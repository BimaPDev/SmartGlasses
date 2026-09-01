; FUN_100f9d80 @ 0x100f9d80 size=24
  cbz r0,0x100f9d94
  ldr r3,[r0,#0x0]
  cbz r3,0x100f9d90
  ldr r2,[r3,#0x60]
  cbz r2,0x100f9d90
  str r0,[r3,#0x58]
  movs r0,#0x0
  bx lr
  movs r0,#0x23
  bx lr
  movs r0,#0x24
  bx lr
