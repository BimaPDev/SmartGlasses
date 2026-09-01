; FUN_100f89c0 @ 0x100f89c0 size=34
  movs r3,#0x0
  push {r4,r5}
  str r3,[r0,#0x14]
  str r3,[r0,#0x24]
  str r3,[r0,#0x30]
  add.w r4,r0,#0x38
  add.w r5,r0,#0x14
  ldmia r5!,{r0,r1,r2,r3}
  stmia r4!,{r0,r1,r2,r3}
  ldmia r5!,{r0,r1,r2,r3}
  stmia r4!,{r0,r1,r2,r3}
  ldr r3,[r5,#0x0]
  str r3,[r4,#0x0]
  pop {r4,r5}
  bx lr
