; FUN_2c5b5ee4 @ 0x2c5b5ee4 size=32
  push {lr}
  sub sp,#0x1c
  movs r2,#0x0
  mov.w r1,#0x400
  add r3,sp,#0x8
  str r2,[sp,#0x10]
  str r1,[sp,#0x0]
  strd r2,r2,[sp,#0x8]
  ldmia r3,{r1,r2,r3}
  bl 0x2c5b5e6c
  add sp,#0x1c
  pop.w pc
