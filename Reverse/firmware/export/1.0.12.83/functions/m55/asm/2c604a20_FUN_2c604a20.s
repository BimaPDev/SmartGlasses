; FUN_2c604a20 @ 0x2c604a20 size=12
  ldr r0,[r0,#0x8]
  cbz r0,0x2c604a2a
  ldrb r0,[r0,#0x18]
  ubfx r0,r0,#0x4,#0x2
  bx lr
