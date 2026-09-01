; FUN_1013cbd6 @ 0x1013cbd6 size=18
  ldrsb.w r3,[r0,#0xe]
  ldrsb.w r0,[r1,#0xe]
  cmp r3,r0
  ite ne
  sub.ne r0,r0,r3
  mov.eq r0,#0x0
  bx lr
