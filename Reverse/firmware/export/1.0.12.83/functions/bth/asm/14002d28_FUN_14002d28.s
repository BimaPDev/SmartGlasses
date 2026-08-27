; FUN_14002d28 @ 0x14002d28 size=16
  cbnz r0,0x14002d34
  ldr r2,[0x14002d38]
  ldr r3,[r2,#0x0]
  orr r3,r3,#0x2
  str r3,[r2,#0x0]
  movs r0,#0x0
  bx lr
