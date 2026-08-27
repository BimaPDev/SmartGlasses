; FUN_2c4969a8 @ 0x2c4969a8 size=12
  ldr r3,[0x2c4969b4]
  ldrb r0,[r3,#0x0]
  subs r0,#0x2
  it ne
  mov.ne r0,#0x1
  bx lr
