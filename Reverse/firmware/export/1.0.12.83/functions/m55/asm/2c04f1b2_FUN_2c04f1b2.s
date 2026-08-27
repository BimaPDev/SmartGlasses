; FUN_2c04f1b2 @ 0x2c04f1b2 size=18
  push {r4,r6,lr}
  movs r5,#0x20
  ldrsb r3,[r7,r6]
  str r4,[sp,#0x2b8]
  lsrs r5,r0,#0xc
  stc2 p4,cr12,[r6,#-0x194]!
  str r7,[r2,#0x54]
  bx r6
