; FUN_2c4df4f8 @ 0x2c4df4f8 size=14
  ldr r3,[r0,#0x0]
  bics.w r3,r1,r3
  ite eq
  mov.eq r0,#0x1
  mov.ne r0,#0x0
  bx lr
