; FUN_10125ff0 @ 0x10125ff0 size=14
  ldr r0,[r0,#0x8]
  cbz r0,0x10125ffc
  ldrb.w r0,[r0,#0x20]
  ubfx r0,r0,#0x4,#0x2
  bx lr
