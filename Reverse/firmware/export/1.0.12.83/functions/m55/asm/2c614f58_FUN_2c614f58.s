; FUN_2c614f58 @ 0x2c614f58 size=32
  cbz r0,0x2c614f74
  ldrb r3,[r0,#0x0]
  sub.w r2,r3,#0x20
  cmp r2,#0x5f
  bhi 0x2c614f68
  movs r0,#0x1
  bx lr
  tst r3,#0x80
  ite ne
  mov.ne r0,#0x2
  mov.eq r0,#0x0
  bx lr
  movs r0,#0x3
  bx lr
