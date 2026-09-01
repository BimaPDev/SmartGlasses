; FUN_101277b8 @ 0x101277b8 size=32
  cbz r0,0x101277d0
  ldrb r3,[r0,#0x0]
  sub.w r2,r3,#0x20
  cmp r2,#0x5f
  bls 0x101277d4
  tst r3,#0x80
  ite eq
  mov.eq r0,#0x0
  mov.ne r0,#0x2
  bx lr
  movs r0,#0x3
  bx lr
  movs r0,#0x1
  bx lr
