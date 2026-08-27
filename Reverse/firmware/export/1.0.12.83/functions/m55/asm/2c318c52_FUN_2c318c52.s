; FUN_2c318c52 @ 0x2c318c52 size=28
  push {r4,r6,lr}
  vshl.u16 d21,d13,d30
  ldrsb r5,[r6,r4]
  stmia r0,{r0,r2,r4,r7}
  ldc2l p9,cr12,[sp],#-0x68
  adr r2,[0x2c318cec]
  strh r6,[r0,#0x22]
  lsrs r6,r0,#0x6
  asrs r3,r3,#0x8
  bkpt 0xc9
  lsls r6,r7,#0x17
  lsrs r4,r4,#0x8
