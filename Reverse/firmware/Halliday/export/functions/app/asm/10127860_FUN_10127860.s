; FUN_10127860 @ 0x10127860 size=26
  cmp r1,#0xfc
  bhi 0x10127878
  cmp r1,#0x2
  bls 0x10127876
  muls r1,r0
  movw r0,#0x8081
  muls r0,r1
  ubfx r0,r0,#0x17,#0x8
  bx lr
  movs r0,#0x0
  bx lr
