; FUN_1000175e @ 0x1000175e size=32
  subs r1,#0x1
  cmp r1,#0x7
  bhi 0x10001782
  tbb [pc,r1]
  adds r0,#0x4
  movs r3,#0x1
  lsl.w r0,r3,r0
  bx lr
  adds r0,#0x8
  b 0x10001772
  adds r0,#0xc
  b 0x10001772
  movs r0,#0x0
  bx lr
