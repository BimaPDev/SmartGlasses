; FUN_2c48fcac @ 0x2c48fcac size=24
  add.w r0,r0,r0, lsl #0x1
  ldr r3,[0x2c48fcc4]
  add.w r3,r3,r0, lsl #0x3
  ldr r0,[r3,#0x14]
  ldr r3,[r3,#0x8]
  cmp r0,r3
  ite cc
  mov.cc r0,#0x0
  mov.cs r0,#0x1
  bx lr
