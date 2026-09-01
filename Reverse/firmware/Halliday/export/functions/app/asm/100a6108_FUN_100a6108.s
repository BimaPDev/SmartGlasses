; FUN_100a6108 @ 0x100a6108 size=22
  cmp r0,#0x10
  itttt eq
  ldr.eq r3,[0x100a6120]
  mov.eq r0,#0x0
  str.eq r2,[r3,#0x0]
  ldr.eq r3,[0x100a6124]
  ite ne
  mvn.ne r0,#0x15
  str.eq r1,[r3,#0x0]
  bx lr
