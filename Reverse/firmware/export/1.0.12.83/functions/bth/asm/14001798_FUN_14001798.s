; FUN_14001798 @ 0x14001798 size=22
  ldr r2,[0x140017b0]
  ldr r3,[r2,#0xc]
  lsls r1,r3,#0x1f
  bmi 0x1400179a
  movs r3,#0x1
  ldr r1,[0x140017b0]
  str r3,[r2,#0x18]
  ldr r3,[r1,#0xc]
  lsls r3,r3,#0x1f
  bmi 0x140017a6
  bx lr
