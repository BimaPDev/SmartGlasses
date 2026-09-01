; FUN_10125fe2 @ 0x10125fe2 size=14
  ldr r0,[r0,#0x8]
  cbz r0,0x10125fee
  ldrb.w r0,[r0,#0x20]
  ubfx r0,r0,#0x2,#0x2
  bx lr
