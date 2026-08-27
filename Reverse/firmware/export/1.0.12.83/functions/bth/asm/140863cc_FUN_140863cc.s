; FUN_140863cc @ 0x140863cc size=14
  ldr r3,[r0,#0x44]
  tst r3,#0xff00ff00
  ite eq
  mov.eq r0,#0x1
  mov.ne r0,#0x0
  bx lr
