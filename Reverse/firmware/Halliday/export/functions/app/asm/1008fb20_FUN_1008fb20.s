; FUN_1008fb20 @ 0x1008fb20 size=16
  ldrsb.w r3,[r0,#0x7]
  cmp r3,#0x0
  bge 0x1008fb2e
  ldr r1,[0x1008fb30]
  b.w 0x10094268
  bx lr
