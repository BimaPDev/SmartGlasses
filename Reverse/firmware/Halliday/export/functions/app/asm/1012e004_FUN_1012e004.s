; FUN_1012e004 @ 0x1012e004 size=20
  cbz r0,0x1012e012
  ldrb r3,[r0,#0x9]
  bfc r3,#0x1,#0x1
  strb r3,[r0,#0x9]
  movs r0,#0x0
  bx lr
  mvn r0,#0x15
  bx lr
