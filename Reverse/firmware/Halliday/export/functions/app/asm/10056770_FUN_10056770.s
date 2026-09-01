; FUN_10056770 @ 0x10056770 size=20
  ldr r3,[0x10056784]
  ldr r2,[r3,#0x0]
  eors r1,r2
  ands r0,r1
  eors r0,r2
  str r0,[r3,#0x0]
  mov.w r0,#0x12c
  b.w 0x1011a866
