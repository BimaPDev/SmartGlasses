; FUN_140a2118 @ 0x140a2118 size=12
  ldr r3,[0x140a2124]
  ldr r0,[r3,#0x0]
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  bx lr
