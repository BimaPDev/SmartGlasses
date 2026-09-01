; FUN_1008c0b0 @ 0x1008c0b0 size=12
  cmp r0,#0x1d
  itte ls
  ldr.ls r3,[0x1008c0bc]
  ldrb.ls r0,[r3,r0]
  mov.hi r0,#0x0
  bx lr
