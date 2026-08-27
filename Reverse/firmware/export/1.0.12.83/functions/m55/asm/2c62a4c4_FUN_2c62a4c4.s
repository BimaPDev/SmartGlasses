; FUN_2c62a4c4 @ 0x2c62a4c4 size=24
  cbz r0,0x2c62a4d0
  ldr r3,[r0,#0x0]
  ldr r0,[r3,#0x10]
  ubfx r0,r0,#0x7,#0xa
  bx lr
  ldr r3,[0x2c62a4dc]
  ldr r0,[r3,#0x0]
  cmp r0,#0x0
  bne 0x2c62a4c6
  movs r0,#0x82
  bx lr
