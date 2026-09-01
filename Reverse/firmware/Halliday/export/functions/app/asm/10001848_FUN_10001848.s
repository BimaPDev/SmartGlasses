; FUN_10001848 @ 0x10001848 size=36
  ldr.w r12,[0x1000186c]
  stm.w r12!,{r0,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11}
  mov r0,sp
  mov r1,lr
  mrs r2,msp
  mrs r3,psp
  stm.w r12!,{r0,r1,r2,r3}
  dsb #0xf
  wfi
  isb #0xf
  bx lr
