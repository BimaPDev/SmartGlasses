; FUN_10124cd6 @ 0x10124cd6 size=12
  ldrh r3,[r0,#0x28]
  tst r1,r3
  ite ne
  mov.ne r0,#0x1
  mov.eq r0,#0x0
  bx lr
