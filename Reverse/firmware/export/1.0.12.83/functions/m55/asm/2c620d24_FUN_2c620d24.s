; FUN_2c620d24 @ 0x2c620d24 size=12
  ldr r3,[0x2c620d30]
  ldr r0,[r3,#0x0]
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  bx lr
