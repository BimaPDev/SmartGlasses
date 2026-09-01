; FUN_1013107e @ 0x1013107e size=14
  cbz r0,0x10131088
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x18]
  cbz r3,0x10131088
  bx r3
  movs r0,#0x0
  bx lr
