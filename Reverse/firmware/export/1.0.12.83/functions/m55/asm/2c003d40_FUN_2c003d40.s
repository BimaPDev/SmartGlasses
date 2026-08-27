; FUN_2c003d40 @ 0x2c003d40 size=18
  ldr r3,[0x2c003d54]
  ldr.w r2,[r3,r0,lsl #0x2]
  ldr r3,[r2,#0xc]
  ubfx r3,r3,#0x4,#0x4
  cmp r1,r3
  bhi 0x2c003d46
  bx lr
