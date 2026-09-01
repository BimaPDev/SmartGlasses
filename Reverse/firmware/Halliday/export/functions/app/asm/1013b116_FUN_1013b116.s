; FUN_1013b116 @ 0x1013b116 size=12
  cmp r0,#0x1
  ite eq
  mov.eq.w r0,#0x8000
  mov.ne r0,#0x0
  bx lr
