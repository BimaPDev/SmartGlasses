; FUN_10092f48 @ 0x10092f48 size=22
  cbnz r0,0x10092f50
  ldr r3,[0x10092f60]
  ldr r0,[r3,#0x0]
  cbz r0,0x10092f5a
  ldr r3,[r0,#0x0]
  ldr r0,[r3,#0x1c]
  ubfx r0,r0,#0x7,#0xa
  bx lr
  movs r0,#0x82
  bx lr
