; FUN_140afd14 @ 0x140afd14 size=26
  movs r3,#0x3b
  sub sp,#0x10
  strb.w r3,[sp,#0x4]
  str r0,[sp,#0x8]
  strh.w r1,[sp,#0xc]
  add r3,sp,#0x10
  ldmdb r3,{r0,r1,r2}
  add sp,#0x10
  b.w 0x140a49fc
