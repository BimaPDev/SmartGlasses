; FUN_1011e9ce @ 0x1011e9ce size=10
  cmp r0,#0x2
  ite gt
  mov.gt r0,#0x0
  mov.le r0,#0x1
  bx lr
