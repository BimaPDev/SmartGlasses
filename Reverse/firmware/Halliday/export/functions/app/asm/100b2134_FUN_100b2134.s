; FUN_100b2134 @ 0x100b2134 size=16
  ldr r3,[0x100b2144]
  add.w r2,r3,#0xc
  cmp r0,#0x0
  ite ne
  mov.ne r0,r3
  mov.eq r0,r2
  bx lr
