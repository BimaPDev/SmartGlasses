; FUN_2c460970 @ 0x2c460970 size=30
  push {r3,r4,r5,r6,lr}
  strb r4,[r3,#0x1]
  ldrh r0,[r7,r7]
  cmp r2,#0xb0
  ldrb r5,[r0,#0x1a]
  b 0x2c460e46
  subs r4,#0x2f
  str r1,[sp,#0x3cc]
  cmp r4,r0
  ldmia r4!,{r0,r1,r3,r7}
  ldr r6,[r4,r4]
  ldmia r3,{r1,r2,r3,r5,r6}
  add.w r8,r10,r9, asr #0x16
  ldrb r6,[r3,#0x5]
