; FUN_1008f514 @ 0x1008f514 size=22
  ldr r3,[0x1008f52c]
  lsrs r2,r0,#0x5
  and.w r3,r3,r0, lsr #0x8
  and r2,r2,#0x7e0
  orrs r3,r2
  ubfx r0,r0,#0x3,#0x5
  orrs r0,r3
  bx lr
