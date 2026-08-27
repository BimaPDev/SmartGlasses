; FUN_2c41c7da @ 0x2c41c7da size=50
  push {r4,r6,r7,lr}
  ldr r6,[sp,#0x22c]
  cmp r4,#0xd9
  add r6,sp,#0x74
  ldrh r6,[r3,r7]
  stmia r2!,{r4,r5,r7}
  ldr r3,[sp,#0x190]
  blx 0x2c6430b0
  adr r3,[0x2c41ca60]
  strb r2,[r5,#0x15]
  str r3,[sp,#0x28]
  lsls r5,r5,#0x9
  lsls r1,r5,#0x1a
  ldr r4,[sp,#0x24]
  adds r6,#0x3f
  add.w r7,lr,r5, lsl #0x1a
  strb r7,[r0,#0x8]
  ldrsb r3,[r2,r4]
  lsls r0,r0,#0x14
  ldr r2,[0x2c41ca10]
  str r5,[sp,#0x2fc]
  ldrb r4,[r2,#0x8]
  b 0x2c41cd7e
