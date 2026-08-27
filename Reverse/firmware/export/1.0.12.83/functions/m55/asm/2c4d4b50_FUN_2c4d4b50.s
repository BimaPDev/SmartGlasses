; FUN_2c4d4b50 @ 0x2c4d4b50 size=12
  ldrb.w r0,[r0,#0xcd]
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  bx lr
