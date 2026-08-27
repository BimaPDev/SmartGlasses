; FUN_140017b4 @ 0x140017b4 size=22
  ldr r2,[0x140017cc]
  ldr r3,[r2,#0xc]
  lsls r1,r3,#0x1f
  bmi 0x140017b6
  movs r3,#0x2
  ldr r1,[0x140017cc]
  str r3,[r2,#0x18]
  ldr r3,[r1,#0xc]
  lsls r3,r3,#0x1f
  bmi 0x140017c2
  bx lr
