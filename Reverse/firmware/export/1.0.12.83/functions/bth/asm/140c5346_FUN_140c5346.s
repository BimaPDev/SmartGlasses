; FUN_140c5346 @ 0x140c5346 size=20
  ldrd r2,r1,[r0,#0x8]
  cmp r2,r1
  bcs 0x140c5354
  adds r2,#0x1
  str r2,[r0,#0x8]
  bx lr
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x28]
  bx r3
