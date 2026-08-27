; FUN_2c285438 @ 0x2c285438 size=10
  push {r0,r2,r3,r4,r6,lr}
  stmia r5!,{r0,r2,r3,r4,r6}
  stmia r5!,{r2,r3,r4,r6}
  bpl 0x2c2854fa
  lsrs r0,r2,#0x1d
