; FUN_1011ff34 @ 0x1011ff34 size=20
  lsr.w r1,r0,r1
  movs r0,#0x0
  cbnz r1,0x1011ff3e
  bx lr
  lsls r3,r1,#0x1f
  bpl 0x1011ff3c
  adds r0,#0x1
  lsrs r1,r1,#0x1
  b 0x1011ff3a
