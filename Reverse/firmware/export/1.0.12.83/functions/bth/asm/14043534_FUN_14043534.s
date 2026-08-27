; FUN_14043534 @ 0x14043534 size=26
  ldr r3,[0x14043550]
  rsb r0,r0,r0, lsl #0x3
  add.w r0,r3,r0, lsl #0x3
  ldrb.w r3,[r0,#0x443]
  cbnz r3,0x1404354a
  ldrb.w r0,[r0,#0x441]
  bx lr
  movs r0,#0x0
  bx lr
