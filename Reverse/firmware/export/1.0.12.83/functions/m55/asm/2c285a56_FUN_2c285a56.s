; FUN_2c285a56 @ 0x2c285a56 size=16
  push {r0,r2,r3,r4,r6,lr}
  stmia r5!,{r0,r2,r3,r4,r6}
  stmia r5!,{r2,r3,r4,r6}
  bpl 0x2c285b18
  lsrs r0,r2,#0x1d
  movs r3,#0x0
  adds r3,#0x33
  movs r3,r6
