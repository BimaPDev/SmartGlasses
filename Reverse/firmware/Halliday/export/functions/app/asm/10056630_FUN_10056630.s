; FUN_10056630 @ 0x10056630 size=18
  movs r0,#0x32
  ldr r3,[0x10056644]
  ldr r3,[r3,#0x0]
  and r3,r3,#0xf
  muls r0,r3
  addw r0,r0,#0x226
  bx lr
