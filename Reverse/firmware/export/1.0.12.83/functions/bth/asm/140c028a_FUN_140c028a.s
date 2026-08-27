; FUN_140c028a @ 0x140c028a size=18
  ldr r2,[r0,#0x4]
  subs r1,r2,#0x1
  cmp r2,#0x1
  str r1,[r0,#0x4]
  bne 0x140c029a
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x4]
  bx r3
  bx lr
