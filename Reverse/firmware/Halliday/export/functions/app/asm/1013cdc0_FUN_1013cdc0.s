; FUN_1013cdc0 @ 0x1013cdc0 size=12
  eors r0,r0
  msr basepri,r0
  mov.w r0,#0x2
  svc 0x2
