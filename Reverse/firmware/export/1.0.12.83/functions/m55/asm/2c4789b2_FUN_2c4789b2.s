; FUN_2c4789b2 @ 0x2c4789b2 size=44
  push {r4,lr}
  sub sp,#0x18
  add.w r12,sp,#0x30
  add r4,sp,#0x20
  stm r4,{r0,r1,r2,r3}
  ldm.w r12,{r0,r1,r2,r3}
  ldr r4,[sp,#0x40]
  stm sp,{r0,r1,r2,r3}
  add r3,sp,#0x20
  str r4,[sp,#0x10]
  ldmia r3,{r0,r1,r2,r3}
  bl 0x2c47e7d8
  add sp,#0x18
  pop.w {r4,lr}
  add sp,#0x10
  bx lr
