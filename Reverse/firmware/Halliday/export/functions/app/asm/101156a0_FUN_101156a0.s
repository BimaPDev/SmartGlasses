; FUN_101156a0 @ 0x101156a0 size=14
  ldr r3,[0x101156b0]
  ldr r3,[r3,#0x0]
  cbnz r3,0x101156aa
  b.w 0x10061900
  movs r0,#0x0
  bx lr
