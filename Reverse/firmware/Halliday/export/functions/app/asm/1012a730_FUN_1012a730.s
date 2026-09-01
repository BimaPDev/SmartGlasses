; FUN_1012a730 @ 0x1012a730 size=12
  ldr r3,[r0,#0x18]
  ldr r0,[r3,#0x24]
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  bx lr
