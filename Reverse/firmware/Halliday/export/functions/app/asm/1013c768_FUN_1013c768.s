; FUN_1013c768 @ 0x1013c768 size=24
  cbz r0,0x1013c77a
  cbz r1,0x1013c77a
  ldr.w r3,[r0,#0xc0]!
  str r3,[r1,#0x0]
  ldr r3,[r0,#0x4]
  movs r0,#0x0
  str r3,[r1,#0x4]
  bx lr
  mvn r0,#0x15
  bx lr
