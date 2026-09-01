; FUN_1012dff0 @ 0x1012dff0 size=20
  cbz r0,0x1012dffe
  ldrb r3,[r0,#0x9]
  orr r3,r3,#0x2
  strb r3,[r0,#0x9]
  movs r0,#0x0
  bx lr
  mvn r0,#0x15
  bx lr
