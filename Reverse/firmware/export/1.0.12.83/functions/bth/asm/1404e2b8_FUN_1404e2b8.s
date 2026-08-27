; FUN_1404e2b8 @ 0x1404e2b8 size=30
  cbz r0,0x1404e2d4
  cmp r0,#0xe
  bhi 0x1404e2d2
  movs r3,#0x7f
  movs r1,#0x7
  smlabb r0,r3,r0,r1
  ldr r2,[0x1404e2d8]
  umull r3,r0,r2,r0
  ubfx r0,r0,#0x3,#0x8
  bx lr
  movs r0,#0x7f
  bx lr
