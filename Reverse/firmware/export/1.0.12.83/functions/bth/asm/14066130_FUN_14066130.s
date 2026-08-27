; FUN_14066130 @ 0x14066130 size=28
  movs r0,#0x40
  ldr r3,[0x1406614c]
  add.w r1,r3,#0x84
  ldr r2,[r3,#0x0]
  cbz r2,0x14066144
  ldrh r2,[r3,#0x6]
  cmp r0,r2
  it cc
  mov.cc r0,r2
  adds r3,#0xc
  cmp r3,r1
  bne 0x14066138
  bx lr
