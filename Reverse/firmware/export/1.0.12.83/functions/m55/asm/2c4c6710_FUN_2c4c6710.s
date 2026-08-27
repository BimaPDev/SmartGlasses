; FUN_2c4c6710 @ 0x2c4c6710 size=116
  push {r4,r5,r6,r7}
  ldrh r5,[r1,#0x6]
  cbz r5,0x2c4c6780
  mov r2,r1
  mov r3,r0
  mov.w r12,#0x0
  ldr r4,[r2,#0x18]
  adds r3,#0x14
  adds r2,#0x18
  add.w r12,r12,#0x1
  rsbs r4,r4
  cmp r12,r5
  str.w r4,[r3,#-0x14]
  ldr r4,[r2,#0x4]
  rsb.w r4,r4,#0x0
  str.w r4,[r3,#-0x10]
  ldr.w r4,[r2,#-0x10]
  str.w r4,[r3,#-0x4]
  ldr.w r4,[r2,#-0xc]
  str.w r4,[r3,#-0xc]
  ldr.w r4,[r2,#-0x8]
  str.w r4,[r3,#-0x8]
  bne 0x2c4c671e
  ldr r3,[r1,#0x0]
  ldr r2,[r1,#0x8]
  smull r4,r2,r3,r2
  mov r5,r2
  ldrd r2,r1,[r1,#0xc]
  orrs.w r5,r4,pc, asr #0x9
  str r4,[r0,#0x10]
  smull r6,r2,r3,r2
  smull r4,r3,r3,r1
  mov r7,r2
  mov r5,r3
  orrs.w r7,r6,pc, asr #0x9
  str r6,[r0,#0x8]
  orrs.w r5,r4,pc, asr #0x9
  str r4,[r0,#0xc]
  pop {r4,r5,r6,r7}
  bx lr
