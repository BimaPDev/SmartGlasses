; FUN_2c447c76 @ 0x2c447c76 size=16
  push {r1,r2,r4,r6,lr}
  umull r6,r7,r12,r4
  ldmia r7!,{r1,r2,r4}
  ldr r3,[0x2c447d24]
  lsls r2,r1,#0xa
  lsls r4,r1,#0x1a
  rsbs r6,r0
