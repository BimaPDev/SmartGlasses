; FUN_2c0e79d0 @ 0x2c0e79d0 size=10
  push {r0,r2,r3,r5,r6,r7,lr}
  ldmia r3,{r3,r7}
  lsls r3,r2,#0x11
  cdp p15,0xf,cr14,cr2,cr5,0x7
