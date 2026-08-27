; FUN_14001738 @ 0x14001738 size=14
  ldr r2,[0x14001748]
  ldr r3,[r2,#0xc]
  ubfx r3,r3,#0x4,#0x4
  cmp r1,r3
  bhi 0x1400173a
  bx lr
