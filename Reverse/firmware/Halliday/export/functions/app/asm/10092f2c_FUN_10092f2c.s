; FUN_10092f2c @ 0x10092f2c size=24
  cbnz r0,0x10092f34
  ldr r3,[0x10092f44]
  ldr r0,[r3,#0x0]
  cbz r0,0x10092f42
  ldr r3,[r0,#0x0]
  ldrb r2,[r3,#0x1c]
  lsls r2,r2,#0x1b
  bpl 0x10092f40
  ldr r0,[r3,#0x0]
  bx lr
  ldr r0,[r3,#0x4]
  bx lr
