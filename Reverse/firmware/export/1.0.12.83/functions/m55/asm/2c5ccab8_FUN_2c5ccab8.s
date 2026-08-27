; FUN_2c5ccab8 @ 0x2c5ccab8 size=36
  push {r7,lr}
  subs r4,#0x16
  ldmia r1!,{r2}
  subs r4,#0x16
  ldmia r0!,{r5,r6,r7}
  subs r4,#0x16
  ldmia r1!,{r5,r7}
  subs r4,#0x16
  ldmia r1!,{r4,r5,r6}
  subs r4,#0x16
  ldmia r1!,{r5,r6,r7}
  subs r4,#0x16
  mov r0,r6
  add sp,#0xc
  pop.w {r4,r5,r6,r7,lr}
  b.w 0x2c5cb620
