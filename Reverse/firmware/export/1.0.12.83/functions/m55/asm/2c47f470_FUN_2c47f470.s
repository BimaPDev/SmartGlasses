; FUN_2c47f470 @ 0x2c47f470 size=28
  rsb.w r3,r3,#0x8
  lsls r3,r3,#0x3
  push {r4,r5,r6}
  adds r3,#0x1
  movs r4,#0x0
  adr r5,[0x2c47f48c]
  nop
  adds r3,r3,r5
  ldmia r1!,{r5}
  ldmia r2!,{r6}
  subs r5,r5,r6
  stmia r0!,{r5}
  bx r3
