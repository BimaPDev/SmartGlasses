; FUN_2c46c508 @ 0x2c46c508 size=10
  cbz r0,0x2c46c510
  ldr r3,[r0,#0xc]
  adds r3,#0x1
  str r3,[r0,#0xc]
  bx lr
