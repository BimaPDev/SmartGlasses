; FUN_1011a98e @ 0x1011a98e size=16
  mov.w r3,#0x40004000
  ldr r2,[r3,#0x0]
  eors r1,r2
  ands r0,r1
  eors r0,r2
  str r0,[r3,#0x0]
  bx lr
