; FUN_2c5b5ebc @ 0x2c5b5ebc size=38
  push {r4,lr}
  movs r3,#0x0
  sub sp,#0x18
  movw r4,#0x151
  movw r1,#0x2ae
  mov.w r2,#0x400
  str r1,[sp,#0x10]
  str r2,[sp,#0x0]
  strd r4,r3,[sp,#0x8]
  add r3,sp,#0x8
  ldmia r3,{r1,r2,r3}
  bl 0x2c5b5e6c
  add sp,#0x18
  pop {r4,pc}
