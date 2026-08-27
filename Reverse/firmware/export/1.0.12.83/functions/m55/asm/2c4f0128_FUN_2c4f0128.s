; FUN_2c4f0128 @ 0x2c4f0128 size=26
  cmp r1,#0x9
  bhi 0x2c4f0142
  cmp r1,#0x8
  bne 0x2c4f0136
  ldr r3,[r0,#0x7c]
  subs r3,#0x1
  str r3,[r0,#0x7c]
  add.w r1,r0,r1, lsl #0x2
  ldr r3,[r1,#0x7c]
  adds r3,#0x1
  str r3,[r1,#0x7c]
  bx lr
