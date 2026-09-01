; FUN_1011f002 @ 0x1011f002 size=24
  ldr r3,[r0,#0x4]
  ldr r3,[r3,#0x0]
  ldr r2,[r3,#0x0]
  cbz r1,0x1011f014
  orr r2,r2,#0x10000
  movs r0,#0x0
  str r2,[r3,#0x0]
  bx lr
  bic r2,r2,#0x10000
  b 0x1011f00e
