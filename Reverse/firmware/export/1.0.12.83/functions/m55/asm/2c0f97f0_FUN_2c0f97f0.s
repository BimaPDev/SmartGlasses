; FUN_2c0f97f0 @ 0x2c0f97f0 size=24
  push {r2,r3,r4,r5,r6,lr}
  asrs r6,r5,#0x7
  lsls r1,r4,#0x10
  ldmia r4,{r0,r1,r4}
  uxtb r6,r7
  lsrs r6,r1,#0x18
  ldmia r3!,{r1,r2,r5,r6}
  lsrs r5,r5,#0x9
  hlt 0x1e
  lsls r4,r0,#0x10
  ldmia r3!,{r1,r2,r5,r6}
  add r3,sp,#0x38
