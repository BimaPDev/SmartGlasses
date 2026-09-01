; FUN_1012a84e @ 0x1012a84e size=20
  ldr r3,[r0,#0x8]
  ldr r2,[r0,#0x0]
  subs r2,r3,r2
  ldr r3,[r0,#0xc]
  ldr r0,[r0,#0x4]
  adds r3,#0x1
  subs r0,r3,r0
  mla r0,r2,r0,r0
  bx lr
