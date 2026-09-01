; FUN_10057234 @ 0x10057234 size=14
  ldr r3,[0x10057244]
  ldr.w r0,[r3,#0x3d8]
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  bx lr
