; FUN_10137ff6 @ 0x10137ff6 size=20
  add.w r3,r1,#0x10
  subs r0,#0x1
  ldrb.w r2,[r3,#-0x1]!
  cmp r3,r1
  strb.w r2,[r0,#0x1]!
  bne 0x10137ffc
  bx lr
