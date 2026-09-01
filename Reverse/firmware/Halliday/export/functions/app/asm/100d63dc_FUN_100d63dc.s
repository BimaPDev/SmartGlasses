; FUN_100d63dc @ 0x100d63dc size=14
  ldr r3,[0x100d63ec]
  ldr r0,[r3,#0x0]
  cbz r0,0x100d63e8
  ldrb r0,[r0,#0x8]
  ubfx r0,r0,#0x3,#0x1
  bx lr
