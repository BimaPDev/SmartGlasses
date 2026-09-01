; FUN_1012d7f2 @ 0x1012d7f2 size=20
  cbz r0,0x1012d804
  ldrb r3,[r0,#0x0]
  cmp r3,#0x55
  bne 0x1012d802
  ldr r0,[r0,#0x54]
  cbz r0,0x1012d804
  ldr r0,[r0,#0x0]
  bx lr
  movs r0,#0x0
  bx lr
