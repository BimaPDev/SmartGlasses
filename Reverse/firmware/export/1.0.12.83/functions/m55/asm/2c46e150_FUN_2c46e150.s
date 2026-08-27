; FUN_2c46e150 @ 0x2c46e150 size=28
  sub sp,#0x10
  movs r3,#0x0
  movs r2,#0x34
  str r3,[sp,#0x8]
  strh.w r3,[sp,#0xc]
  add r3,sp,#0x10
  strb.w r2,[sp,#0x4]
  ldmdb r3,{r0,r1,r2}
  add sp,#0x10
  b.w 0x2c4f7174
