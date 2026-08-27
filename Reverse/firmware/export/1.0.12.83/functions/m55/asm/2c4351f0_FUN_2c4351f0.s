; FUN_2c4351f0 @ 0x2c4351f0 size=24
  svc 0xbf
  stmia r1!,{r0,r6,r7}
  str r1,[sp,#0x19c]
  add r6,sp,#0x300
  push {r1,r6,r7,lr}
  cmp r1,r3
  cmp r10,r9
  strb r6,[r5,#0xa]
  ldc2l p14,cr12,[r8,#0x2c0]!
  add sp,#0x168
  b 0x2c434a3e
