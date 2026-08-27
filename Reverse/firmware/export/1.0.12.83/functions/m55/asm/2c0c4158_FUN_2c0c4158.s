; FUN_2c0c4158 @ 0x2c0c4158 size=24
  push {r2,lr}
  movs r0,r0
  stmia r5,{r0,r1,r2,r5,r6}
  movs r0,r0
  bvc 0x2c0c41ee
  movs r0,r0
  pkhbt.w r0,r1,r0
  ldc2l p12,cr15,[sp],#0xc
  lsls r4,r0,#0x10
  lsls r3,r7,#0x17
