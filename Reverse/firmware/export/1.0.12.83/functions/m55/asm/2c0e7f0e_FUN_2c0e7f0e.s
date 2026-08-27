; FUN_2c0e7f0e @ 0x2c0e7f0e size=14
  push {r2,r4,r5,r6,r7,lr}
  bl 0x2bbfdd1c
  cmp r2,#0xfe
  stmia r0!,{r2,r5,r6,r7}
  adds r6,#0xc5
  lsrs r5,r7,#0xe
