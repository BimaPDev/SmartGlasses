; FUN_1011a1f0 @ 0x1011a1f0 size=14
  eors r0,r0
  msr basepri,r0
  mov.w r0,#0x4
  svc 0x2
  bx lr
