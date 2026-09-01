; FUN_1012d5ae @ 0x1012d5ae size=16
  cbz r0,0x1012d5b8
  ldr r3,[r0,#0xc]
  ldr r3,[r3,#0x2c]
  cbz r3,0x1012d5b8
  bx r3
  mvn r0,#0x57
  bx lr
