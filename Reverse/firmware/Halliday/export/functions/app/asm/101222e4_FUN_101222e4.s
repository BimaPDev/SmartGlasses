; FUN_101222e4 @ 0x101222e4 size=12
  add r2,r0
  strb.w r1,[r0],#0x1
  cmp r0,r2
  bne 0x101222e6
  bx lr
