; FUN_2c003c60 @ 0x2c003c60 size=24
  ldr r2,[0x2c003c78]
  ldr r3,[0x2c003c7c]
  ldr.w r0,[r2,r0,lsl #0x2]
  and.w r1,r3,r1, lsl #0xc
  ldr r2,[0x2c003c80]
  ldr r3,[r0,#0x4]
  ands r2,r3
  orrs r1,r2
  str r1,[r0,#0x4]
  bx lr
