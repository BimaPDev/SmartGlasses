; FUN_2c5def1c @ 0x2c5def1c size=32
  ldrb r3,[r0,#0x1f]
  ldrb.w r0,[r0,#0x21]
  cbnz r3,0x2c5def30
  subs r0,#0x1
  cmp r0,#0x3
  ite hi
  mov.hi r0,#0x0
  mov.ls r0,#0x1
  bx lr
  subs r0,#0x3
  cmp r0,#0x1
  ite hi
  mov.hi r0,#0x0
  mov.ls r0,#0x1
  bx lr
