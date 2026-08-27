; FUN_1408aa84 @ 0x1408aa84 size=28
  cmp.w r0,#0x1000
  bls 0x1408aa9c
  movw r3,#0x101
  ands r0,r3
  sub.w r0,r0,#0x1
  clz r0,r0
  lsrs r0,r0,#0x5
  bx lr
  movs r0,#0x0
  bx lr
