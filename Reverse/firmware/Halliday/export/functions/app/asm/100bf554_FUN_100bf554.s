; FUN_100bf554 @ 0x100bf554 size=12
  ldr r3,[0x100bf560]
  ldr r0,[r3,#0x0]
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  bx lr
