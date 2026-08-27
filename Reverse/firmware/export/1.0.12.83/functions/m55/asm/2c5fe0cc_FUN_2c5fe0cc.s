; FUN_2c5fe0cc @ 0x2c5fe0cc size=26
  push {r4}
  ldr r4,[0x2c5fe0e8]
  mov r12,r0
  ldmia r4!,{r0,r1,r2,r3}
  stm.w r12!,{r0,r1,r2,r3}
  ldm.w r4,{r0,r1,r2}
  stm r12,{r0,r1,r2}
  pop.w r4
  bx lr
