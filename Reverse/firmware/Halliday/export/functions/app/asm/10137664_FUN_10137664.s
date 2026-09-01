; FUN_10137664 @ 0x10137664 size=18
  ldrb r3,[r0,#0x1]
  cbz r3,0x10137672
  cmp r3,#0x2
  ite ne
  mov.ne r0,#0x0
  mov.eq r0,#0x8
  bx lr
  movs r0,#0x6
  bx lr
