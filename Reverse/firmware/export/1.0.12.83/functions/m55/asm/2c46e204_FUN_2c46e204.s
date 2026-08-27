; FUN_2c46e204 @ 0x2c46e204 size=46
  push {lr}
  movs r2,#0x1
  sub sp,#0x1c
  mov.w r12,#0x44
  mov r3,r0
  strh.w r2,[sp,#0x14]
  add.w r1,sp,#0x7
  add r2,sp,#0x18
  strb.w r12,[sp,#0xc]
  str r1,[sp,#0x10]
  strb.w r3,[sp,#0x7]
  ldmdb r2,{r0,r1,r2}
  bl 0x2c4f7174
  add sp,#0x1c
  pop.w pc
