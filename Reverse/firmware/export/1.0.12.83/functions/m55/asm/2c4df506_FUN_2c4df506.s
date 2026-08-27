; FUN_2c4df506 @ 0x2c4df506 size=18
  ldr r3,[r0,#0x0]
  bics.w r2,r1,r3
  ittte ne
  orr.ne r3,r1
  str.ne r3,[r0,#0x0]
  mov.ne r0,#0x0
  mov.eq r0,#0x1
  bx lr
