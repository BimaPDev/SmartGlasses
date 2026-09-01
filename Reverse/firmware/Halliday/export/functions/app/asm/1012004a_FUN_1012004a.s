; FUN_1012004a @ 0x1012004a size=14
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x0]
  adds r3,#0x4
  ldr r2,[r3,#0x0]
  lsls r2,r2,#0x1a
  bmi 0x10120050
  bx lr
