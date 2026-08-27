; FUN_2c43301e @ 0x2c43301e size=24
  push {r1,r3,r5,lr}
  str r6,[sp,#0x5c]
  str r4,[r3,r3]
  rsbs r6,r2
  adds r0,r5,#0x2
  bcc 0x2c43307c
  str r2,[sp,#0x2c]
  str r1,[r2,#0x60]
  stmia r1!,{r0,r3,r6,r7}
  asrs r4,r0,#0x9
  subs r2,r3,#0x1
  ldmia r2!,{r5}
