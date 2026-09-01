; FUN_1011ee5e @ 0x1011ee5e size=14
  ldr r3,[r0,#0x8]
  ldr r3,[r3,#0x10]
  cbz r3,0x1011ee66
  bx r3
  mvn r0,#0x57
  bx lr
