; FUN_2c4618a0 @ 0x2c4618a0 size=18
  push {r0,r1,r2,r5,r7,lr}
  cmp r6,#0xc4
  str r3,[sp,#0x1b8]
  stmia r5!,{r0,r1,r2,r4,r6,r7}
  ldr r5,[r0,#0x74]
  add r7,sp,#0x188
  stmia r4,{r0,r1,r2,r3,r4,r7}
  ands r4,r1
  strh r1,[r2,r0]
