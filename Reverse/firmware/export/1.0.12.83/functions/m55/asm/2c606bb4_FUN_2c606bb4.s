; FUN_2c606bb4 @ 0x2c606bb4 size=12
  ldrh r3,[r0,#0x20]
  tst r1,r3
  ite ne
  mov.ne r0,#0x1
  mov.eq r0,#0x0
  bx lr
