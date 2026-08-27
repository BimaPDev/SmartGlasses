; FUN_2c461050 @ 0x2c461050 size=16
  push {r2,r6,lr}
  strb r2,[r6,r7]
  lsrs r3,r7,#0x20
  ldmia r0!,{r2,r6}
  str r0,[r2,r4]
  stmia r5,{r2,r5,r7}
  b 0x2c461180
  subs r1,r0,#0x4
