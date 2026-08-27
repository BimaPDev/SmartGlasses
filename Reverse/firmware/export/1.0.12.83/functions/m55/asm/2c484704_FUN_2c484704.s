; FUN_2c484704 @ 0x2c484704 size=34
  push {r4,lr}
  movs r3,#0x10
  sub sp,#0x10
  ldr r4,[0x2c484728]
  add.w r2,sp,r3
  str r0,[sp,#0x8]
  strh.w r1,[sp,#0xc]
  movs r0,#0x0
  ldmdb r2,{r1,r2}
  str r4,[sp,#0x0]
  bl 0x2c479248
  add sp,#0x10
  pop {r4,pc}
