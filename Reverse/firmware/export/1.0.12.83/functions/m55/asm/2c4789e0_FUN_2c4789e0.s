; FUN_2c4789e0 @ 0x2c4789e0 size=44
  sub sp,#0x10
  push {lr}
  sub sp,#0x14
  add.w lr,sp,#0x18
  add.w r12,sp,#0x28
  stm lr,{r0,r1,r2,r3}
  ldm.w r12,{r0,r1,r2,r3}
  stm sp,{r0,r1,r2,r3}
  ldm.w lr,{r0,r1,r2,r3}
  bl 0x2c47e60c
  add sp,#0x14
  pop.w lr
  add sp,#0x10
  bx lr
