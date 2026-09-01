; FUN_10092f10 @ 0x10092f10 size=24
  cbnz r0,0x10092f18
  ldr r3,[0x10092f28]
  ldr r0,[r3,#0x0]
  cbz r0,0x10092f26
  ldr r3,[r0,#0x0]
  ldrb r2,[r3,#0x1c]
  lsls r2,r2,#0x1b
  bpl 0x10092f24
  ldr r0,[r3,#0x4]
  bx lr
  ldr r0,[r3,#0x0]
  bx lr
