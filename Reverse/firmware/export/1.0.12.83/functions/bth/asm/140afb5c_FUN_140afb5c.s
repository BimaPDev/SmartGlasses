; FUN_140afb5c @ 0x140afb5c size=26
  movs r3,#0x39
  sub sp,#0x10
  strb.w r3,[sp,#0x4]
  str r0,[sp,#0x8]
  strh.w r1,[sp,#0xc]
  add r3,sp,#0x10
  ldmdb r3,{r0,r1,r2}
  add sp,#0x10
  b.w 0x140a49fc
