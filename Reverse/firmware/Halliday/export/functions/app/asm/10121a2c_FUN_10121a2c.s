; FUN_10121a2c @ 0x10121a2c size=54
  movs r2,#0x0
  movw r1,#0xffff
  ldr r3,[r0,#0xc]
  movs r0,#0x1
  strb.w r2,[r3,#0x7c]
  strh.w r2,[r3,#0x7e]
  add.w r2,r3,#0x1100
  adds r2,#0x10
  str.w r2,[r3,#0x80]
  add.w r2,r3,#0x1900
  adds r2,#0x10
  str.w r2,[r3,#0x84]
  add.w r2,r3,#0x1940
  adds r2,#0x10
  strh.w r1,[r3,#0x78]
  str.w r2,[r3,#0x88]
  bx lr
