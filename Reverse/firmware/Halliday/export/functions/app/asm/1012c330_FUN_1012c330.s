; FUN_1012c330 @ 0x1012c330 size=18
  ldrb.w r3,[r0,#0x70]
  lsls r3,r3,#0x1d
  bmi 0x1012c33e
  ldr r0,[r0,#0x2c]
  b.w 0x1012bec6
  ldr r0,[r0,#0x34]
  bx lr
