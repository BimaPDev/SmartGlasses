; FUN_10068a5c @ 0x10068a5c size=20
  movs r3,#0x0
  movs r1,#0x20
  ldr r0,[0x10068a70]
  adds r2,r0,r3
  adds r3,#0x1
  cmp r3,#0x40
  strb.w r1,[r2,#0x300]
  bne 0x10068a62
  bx lr
