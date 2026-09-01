; FUN_101222f0 @ 0x101222f0 size=22
  ldr r3,[r0,#0x34]
  subs r1,#0x2
  subs r3,#0x2
  cmp r3,r1
  ittte hi
  ldrh.hi r3,[r0,#0xa]
  ldr.hi r0,[r0,#0x48]
  mla.hi r0,r1,r3,r0
  mov.ls r0,#0x0
  bx lr
