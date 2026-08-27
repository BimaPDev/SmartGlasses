; FUN_2c3188dc @ 0x2c3188dc size=14
  push {r0,r1,r2,r3,r4,r7,lr}
  lsrs r1,r4,#0x20
  asrs r2,r0,#0x1
  movs r1,#0xfc
  tst r0,r1
  str r5,[sp,#0x40]
  udf #0xf1
