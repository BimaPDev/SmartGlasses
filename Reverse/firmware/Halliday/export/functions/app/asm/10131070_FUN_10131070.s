; FUN_10131070 @ 0x10131070 size=14
  cbz r0,0x1013107a
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x14]
  cbz r3,0x1013107a
  bx r3
  movs r0,#0x0
  bx lr
