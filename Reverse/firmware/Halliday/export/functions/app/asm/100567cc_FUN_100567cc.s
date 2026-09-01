; FUN_100567cc @ 0x100567cc size=14
  ldr r3,[0x100567dc]
  ldr r2,[r3,#0x0]
  eors r1,r2
  ands r0,r1
  eors r0,r2
  str r0,[r3,#0x0]
  bx lr
