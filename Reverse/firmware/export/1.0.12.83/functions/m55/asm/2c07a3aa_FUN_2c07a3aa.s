; FUN_2c07a3aa @ 0x2c07a3aa size=22
  push {r0,r3,r7,lr}
  ldr r5,[sp,#0xd0]
  ldrh r5,[r5,#0x36]
  ldmia r1!,{r5,r7}
  ldr r4,[sp,#0xd4]
  ldrh r5,[r5,#0x2e]
  str r0,[r3,#0x8]
  stmia r1!,{r3,r7}
  add r2,sp,#0xc0
  ldrh r2,[r0,#0x34]
  add pc,r1
