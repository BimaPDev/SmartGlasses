; FUN_2c519834 @ 0x2c519834 size=24
  ldrsb.w r2,[r0,#0x2e]
  ldrsb.w r1,[r0,#0x2d]
  cmp r1,r2
  bgt 0x2c519842
  bx lr
  adds r2,#0x1
  strb.w r2,[r0,#0x2e]
  b.w 0x2c607df0
