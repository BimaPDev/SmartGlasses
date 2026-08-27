; FUN_140cbffc @ 0x140cbffc size=20
  ldrd r2,r1,[r0,#0x8]
  cmp r2,r1
  bcs 0x140cc00a
  adds r2,#0x1
  str r2,[r0,#0x8]
  bx lr
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x28]
  bx r3
