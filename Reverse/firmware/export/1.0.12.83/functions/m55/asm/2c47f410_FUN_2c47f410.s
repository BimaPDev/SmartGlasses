; FUN_2c47f410 @ 0x2c47f410 size=28
  rsb.w r3,r3,#0x8
  lsls r3,r3,#0x3
  push {r4,r5,r6}
  adds r3,#0x1
  mov r4,r0
  movs r0,#0x0
  adr r5,[0x2c47f42c]
  adds r3,r3,r5
  ldmia r1!,{r5}
  ldmia r2!,{r6}
  adds r5,r5,r6
  stmia r4!,{r5}
  bx r3
