; FUN_1012d6fa @ 0x1012d6fa size=16
  cbz r0,0x1012d706
  ldr r3,[r0,#0x50]
  cbz r3,0x1012d706
  ldr r3,[r3,#0x2c]
  cbz r3,0x1012d706
  bx r3
  movs r0,#0x0
  bx lr
