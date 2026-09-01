; FUN_101277a8 @ 0x101277a8 size=16
  cmp r0,#0x3
  beq 0x101277b4
  subs r3,r0,#0x6
  rsbs r0,r3
  adcs r0,r3
  bx lr
  movs r0,#0x1
  bx lr
