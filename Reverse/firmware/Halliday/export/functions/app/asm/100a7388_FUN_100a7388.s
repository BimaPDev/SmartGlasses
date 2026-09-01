; FUN_100a7388 @ 0x100a7388 size=18
  ldr r3,[0x100a739c]
  ldr r3,[r3,#0x0]
  cbz r3,0x100a7396
  ldrb r0,[r3,#0x1]
  ubfx r0,r0,#0x1,#0x1
  bx lr
  movs r0,#0x1
  bx lr
