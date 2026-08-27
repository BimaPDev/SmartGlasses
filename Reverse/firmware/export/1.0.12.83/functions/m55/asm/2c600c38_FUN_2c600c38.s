; FUN_2c600c38 @ 0x2c600c38 size=10
  ldr r0,[r0,#0x8]
  cbz r0,0x2c600c40
  ldrb r0,[r0,#0x1a]
  lsrs r0,r0,#0x6
  bx lr
