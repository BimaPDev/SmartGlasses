; FUN_100d3d44 @ 0x100d3d44 size=14
  ldr r3,[0x100d3d54]
  ldr r3,[r3,#0x0]
  ldrh r0,[r3,#0x2]
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  bx lr
