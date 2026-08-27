; FUN_2c4bfdec @ 0x2c4bfdec size=14
  ldr r3,[0x2c4bfdfc]
  cmp r0,#0xf
  ite ls
  ldrsb.ls r0,[r3,r0]
  ldrsb.hi.w r0,[r3,#0xf]
  bx lr
