; FUN_2c4d4874 @ 0x2c4d4874 size=12
  ldrb.w r0,[r0,#0x23]
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  bx lr
