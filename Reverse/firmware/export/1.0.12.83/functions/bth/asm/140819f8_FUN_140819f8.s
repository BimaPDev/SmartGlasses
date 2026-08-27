; FUN_140819f8 @ 0x140819f8 size=12
  ldrb.w r0,[r0,#0xef]
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  bx lr
