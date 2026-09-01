; FUN_1012dec8 @ 0x1012dec8 size=24
  cmp r0,#0x6
  beq 0x1012deda
  cmp r0,#0x16
  ite ne
  mov.ne.w r0,#0x4000
  mov.eq.w r0,#0x2000
  bx lr
  mov.w r0,#0x8000
  bx lr
