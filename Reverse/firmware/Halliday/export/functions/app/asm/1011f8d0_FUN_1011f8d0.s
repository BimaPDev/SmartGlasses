; FUN_1011f8d0 @ 0x1011f8d0 size=14
  cbz r0,0x1011f8d8
  ldr r3,[r0,#0x8]
  ldr r3,[r3,#0x8]
  bx r3
  mvn r0,#0x15
  bx lr
