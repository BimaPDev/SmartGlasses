; FUN_2c606ba4 @ 0x2c606ba4 size=12
  ldr r3,[r0,#0x1c]
  tst r1,r3
  ite ne
  mov.ne r0,#0x1
  mov.eq r0,#0x0
  bx lr
