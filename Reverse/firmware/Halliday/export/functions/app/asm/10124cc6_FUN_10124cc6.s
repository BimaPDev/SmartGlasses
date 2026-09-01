; FUN_10124cc6 @ 0x10124cc6 size=12
  ldr r3,[r0,#0x24]
  tst r1,r3
  ite ne
  mov.ne r0,#0x1
  mov.eq r0,#0x0
  bx lr
