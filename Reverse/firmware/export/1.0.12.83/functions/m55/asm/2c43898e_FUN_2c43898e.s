; FUN_2c43898e @ 0x2c43898e size=18
  push {r1,r2,r4,r5,r6,r7,lr}
  ldr r6,[sp,#0x334]
  stc2 p15,cr1,[r9],{0x48}
  str.w r2,[r3,#0xdbe]
  subs r2,#0x96
  ldrsh r3,[r2,r6]
  stmia r1!,{r2,r4,r6}
