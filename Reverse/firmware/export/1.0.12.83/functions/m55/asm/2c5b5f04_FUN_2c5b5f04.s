; FUN_2c5b5f04 @ 0x2c5b5f04 size=32
  push {lr}
  sub sp,#0x1c
  mov.w r2,#0x400
  movs r1,#0x0
  add r3,sp,#0x8
  str r2,[sp,#0x10]
  str r2,[sp,#0x0]
  strd r2,r1,[sp,#0x8]
  ldmia r3,{r1,r2,r3}
  bl 0x2c5b5e6c
  add sp,#0x1c
  pop.w pc
