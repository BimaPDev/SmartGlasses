; FUN_1404f55c @ 0x1404f55c size=30
  cbz r0,0x1404f578
  cmp r0,#0xe
  bhi 0x1404f576
  movs r3,#0xf
  movs r1,#0x7
  smlabb r0,r3,r0,r1
  ldr r2,[0x1404f57c]
  umull r3,r0,r2,r0
  ubfx r0,r0,#0x3,#0x8
  bx lr
  movs r0,#0xf
  bx lr
