; FUN_2c4d0d38 @ 0x2c4d0d38 size=18
  cmp r3,#0x0
  add.w r1,r2,r1, lsl #0x4
  ldr r3,[r0,#0x0]
  ite ne
  mov.ne r2,#0x3
  mov.eq r2,#0x1
  strb r2,[r3,r1]
  bx lr
