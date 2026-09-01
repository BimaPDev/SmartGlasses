; FUN_100a2324 @ 0x100a2324 size=16
  ldr r3,[0x100a2334]
  ldr r3,[r3,#0x0]
  cbz r3,0x100a2332
  ldrb r2,[r3,#0x10]
  bfc r2,#0x1,#0x1
  strb r2,[r3,#0x10]
  bx lr
