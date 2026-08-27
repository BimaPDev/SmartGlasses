; FUN_2c547bd8 @ 0x2c547bd8 size=14
  ldrd r2,r3,[r0,#0x20]
  orrs r3,r2
  ite ne
  mov.ne r0,#0x1
  mov.eq r0,#0x0
  bx lr
