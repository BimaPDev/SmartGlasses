; FUN_2c22718a @ 0x2c22718a size=28
  push {r1,r2,r3,r4,r6,lr}
  ldrsh r5,[r2,r5]
  str r5,[r4,r2]
  movs r0,r0
  movs r0,r0
  adr r0,[0x2c2271d0]
  lsrs r0,r0,#0x1c
  lsls r0,r6,#0x1
  lsls r0,r0,#0x14
  strb r5,[r2,r5]
  stmia r5!,{r1,r2,r3,r4,r6}
  ldrsh r5,[r2,r5]
  lsls r0,r6,#0x1
  cmp r7,#0x0
