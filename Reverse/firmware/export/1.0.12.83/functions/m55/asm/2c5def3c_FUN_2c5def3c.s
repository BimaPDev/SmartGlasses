; FUN_2c5def3c @ 0x2c5def3c size=16
  ldrb.w r0,[r0,#0x21]
  subs r0,#0x9
  cmp r0,#0x2
  ite hi
  mov.hi r0,#0x0
  mov.ls r0,#0x1
  bx lr
