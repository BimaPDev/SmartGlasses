; FUN_100c196c @ 0x100c196c size=22
  movs r1,#0x2c
  ldrb r3,[r0,#0x6]
  ldr r2,[0x100c1984]
  mla r3,r1,r3,r2
  ldr r3,[r3,#0x28]
  subs r0,r0,r3
  ldr r3,[0x100c1988]
  asrs r0,r0,#0x3
  muls r0,r3
  bx lr
