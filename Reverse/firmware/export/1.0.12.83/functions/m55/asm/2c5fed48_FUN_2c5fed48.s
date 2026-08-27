; FUN_2c5fed48 @ 0x2c5fed48 size=32
  push {r4}
  ldr r4,[0x2c5fed68]
  mov r12,r0
  ldmia r4!,{r0,r1,r2,r3}
  stm.w r12!,{r0,r1,r2,r3}
  ldmia r4!,{r0,r1,r2,r3}
  stm.w r12!,{r0,r1,r2,r3}
  ldm.w r4,{r0,r1}
  stm r12,{r0,r1}
  pop.w r4
  bx lr
