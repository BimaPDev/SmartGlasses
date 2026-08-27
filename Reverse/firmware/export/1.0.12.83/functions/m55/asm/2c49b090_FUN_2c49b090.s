; FUN_2c49b090 @ 0x2c49b090 size=24
  ldr r3,[0x2c49b0a8]
  ldr.w r0,[r3,#0xfc]
  ldr.w r2,[r3,#0xfc]
  ubfx r0,r0,#0x18,#0x1
  orr r2,r2,#0x1000000
  str.w r2,[r3,#0xfc]
  bx lr
