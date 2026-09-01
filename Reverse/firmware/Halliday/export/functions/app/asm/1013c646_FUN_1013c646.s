; FUN_1013c646 @ 0x1013c646 size=20
  cbz r0,0x1013c658
  ldr r3,[r0,#0xc]
  ldrh r0,[r3,#0x0]
  ubfx r0,r0,#0x0,#0x9
  sub.w r3,r0,#0x100
  rsbs r0,r3
  adcs r0,r3
  bx lr
