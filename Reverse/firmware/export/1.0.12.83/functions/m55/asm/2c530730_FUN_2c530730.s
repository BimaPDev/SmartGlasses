; FUN_2c530730 @ 0x2c530730 size=28
  ldr r3,[0x2c53074c]
  strb r1,[r3,#0x0]
  cbz r1,0x2c530742
  ldr r1,[0x2c530750]
  movs r2,#0x0
  ldr r3,[0x2c530754]
  str r0,[r1,#0x0]
  strb r2,[r3,#0x0]
  bx lr
  ldr r2,[0x2c530758]
  ldr r3,[0x2c53075c]
  str r0,[r2,#0x0]
  strb r1,[r3,#0x0]
  bx lr
