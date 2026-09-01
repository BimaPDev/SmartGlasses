; FUN_1013c70e @ 0x1013c70e size=12
  mrs r0,ipsr
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  bx lr
