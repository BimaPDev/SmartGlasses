; FUN_140926e0 @ 0x140926e0 size=16
  ldr r3,[0x140926f0]
  ldrb r2,[r3,#0x0]
  cbnz r2,0x140926ee
  movs r2,#0x1
  ldr r1,[0x140926f4]
  strb r2,[r3,#0x0]
  strb r0,[r1,#0x0]
  bx lr
