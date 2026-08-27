; FUN_2c62e500 @ 0x2c62e500 size=34
  ldr r2,[0x2c62e524]
  subs r1,r1,r0
  ldr r3,[r2,#0x0]
  adds r1,#0x1
  eor.w r3,r3,r3, lsl #0xd
  eor.w r3,r3,r3, lsr #0x11
  eor.w r3,r3,r3, lsl #0x5
  udiv r12,r3,r1
  str r3,[r2,#0x0]
  mls r3,r1,r12,r3
  add r0,r3
  bx lr
