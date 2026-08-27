; FUN_2c138738 @ 0x2c138738 size=14
  cmp r0,#0x27
  itte ls
  ldr.ls r3,[0x2c138748]
  ldr.ls.w r0,[r3,r0,lsl #0x2]
  mov.hi r0,#0x0
  bx lr
