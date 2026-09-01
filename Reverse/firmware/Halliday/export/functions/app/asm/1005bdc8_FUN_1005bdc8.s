; FUN_1005bdc8 @ 0x1005bdc8 size=36
  push {r0,r1,r2,r3,r4,lr}
  ldr r3,[0x1005bdec]
  ldr r0,[r3,#0x0]
  cbnz r0,0x1005bde6
  movs r2,#0x1
  str r2,[r3,#0x0]
  bl 0x1005bd84
  ldr r2,[0x1005bdf0]
  add r3,sp,#0x4
  ldmia r2,{r0,r1,r2}
  stm r3,{r0,r1,r2}
  bl 0x1011aa9a
  add sp,#0x14
  pop.w pc
