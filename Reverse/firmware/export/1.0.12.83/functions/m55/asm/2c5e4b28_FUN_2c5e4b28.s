; FUN_2c5e4b28 @ 0x2c5e4b28 size=32
  push {r4,lr}
  sub sp,#0x18
  movs r2,#0x0
  movs r4,#0xcc
  mov.w r1,#0x400
  add r3,sp,#0x8
  str r4,[sp,#0x10]
  str r1,[sp,#0x0]
  strd r2,r2,[sp,#0x8]
  ldmia r3,{r1,r2,r3}
  bl 0x2c5e4ad8
  add sp,#0x18
  pop {r4,pc}
