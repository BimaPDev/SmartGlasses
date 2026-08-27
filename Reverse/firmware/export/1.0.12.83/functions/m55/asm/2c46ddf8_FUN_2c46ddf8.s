; FUN_2c46ddf8 @ 0x2c46ddf8 size=24
  sub sp,#0x10
  add r3,sp,#0x10
  str r0,[sp,#0x8]
  strh.w r1,[sp,#0xc]
  strb.w r2,[sp,#0x4]
  ldmdb r3,{r0,r1,r2}
  add sp,#0x10
  b.w 0x2c4f7174
