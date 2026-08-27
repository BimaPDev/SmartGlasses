; FUN_2c5fec7c @ 0x2c5fec7c size=30
  push {r4}
  ldr r4,[0x2c5fec9c]
  mov r12,r0
  ldmia r4!,{r0,r1,r2,r3}
  stm.w r12!,{r0,r1,r2,r3}
  ldmia r4!,{r0,r1,r2,r3}
  stm.w r12!,{r0,r1,r2,r3}
  ldr r3,[r4,#0x0]
  str.w r3,[r12,#0x0]
  pop.w r4
  bx lr
