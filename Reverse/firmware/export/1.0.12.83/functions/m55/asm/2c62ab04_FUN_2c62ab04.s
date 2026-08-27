; FUN_2c62ab04 @ 0x2c62ab04 size=378
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  mov r4,r0
  sub sp,#0xc
  mov r7,r1
  mov r6,r2
  mov r5,r3
  cbnz r1,0x2c62ab20
  cmp.w r2,#0x100
  bne 0x2c62ab20
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  ldrh r0,[r5,#0x0]
  ldrh r2,[r4,#0x0]
  ldrh r3,[r4,#0x2]
  subs r2,r2,r0
  sxth r2,r2
  strh r2,[r4,#0x0]
  ldrh r1,[r5,#0x2]
  subs r3,r3,r1
  sxth r3,r3
  strh r3,[r4,#0x2]
  cmp r7,#0x0
  beq 0x2c62ac26
  ldr.w r10,[0x2c62ac88]
  ldr.w r1,[r10,#0x0]
  cmp r1,r7
  beq.w 0x2c62ac4a
  cmp.w r7,#0xe10
  bgt 0x2c62ac44
  cmp r7,#0x0
  ite lt
  add.lt.w r8,r7,#0xe10
  mov.ge r8,r7
  ldr.w r9,[0x2c62ac8c]
  asr.w r11,r8, asr #0x1f
  mvn r12,#0x9
  smull r3,r0,r9,r8
  rsb r11,r11,r0, asr #0x2
  add.w r3,r11,#0x1
  sxth.w r0,r11
  mla r8,r12,r11,r8
  str r3,[sp,#0x0]
  bl 0x2c62e208
  ldr r3,[sp,#0x0]
  mov r2,r0
  sxth r0,r3
  str r2,[sp,#0x4]
  bl 0x2c62e208
  str r0,[sp,#0x0]
  add.w r0,r11,#0x5a
  sxth r0,r0
  bl 0x2c62e208
  add.w lr,r11,#0x5b
  mov r11,r0
  sxth.w r0,lr
  bl 0x2c62e208
  ldr r3,[sp,#0x0]
  rsb.w r12,r8,#0xa
  ldr r2,[sp,#0x4]
  mul r3,r8,r3
  cmp.w r6,#0x100
  mul lr,r8,r0
  mla r3,r12,r2,r3
  mla r12,r12,r11,lr
  ldr.w lr,[0x2c62ac84]
  smull r1,r2,r9,r3
  asr.w r3,r3, asr #0x1f
  asr.w r1,r12, asr #0x1f
  str.w r7,[r10,#0x0]
  rsb r2,r3,r2, asr #0x2
  smull r3,r9,r9,r12
  ldr r7,[0x2c62ac80]
  rsb r1,r1,r9, asr #0x2
  ldrsh.w r3,[r4,#0x2]
  asr.w r0,r2, asr #0x5
  ldrsh.w r2,[r4,#0x0]
  asr.w r1,r1, asr #0x5
  str.w r0,[lr,#0x0]
  str r1,[r7,#0x0]
  beq 0x2c62ac58
  mul r7,r1,r2
  mul r1,r3,r1
  mls r3,r0,r3,r7
  mla r0,r0,r2,r1
  ldrh r1,[r5,#0x0]
  mul r3,r6,r3
  mul r2,r6,r0
  add.w r3,r1,r3, asr #0x12
  strh r3,[r4,#0x0]
  ldrh r1,[r5,#0x2]
  add.w r2,r1,r2, asr #0x12
  strh r2,[r4,#0x2]
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  ldrh r1,[r5,#0x0]
  mul r2,r6,r2
  mul r3,r6,r3
  add.w r0,r1,r2, asr #0x8
  strh r0,[r4,#0x0]
  ldrh r2,[r5,#0x2]
  add.w r2,r2,r3, asr #0x8
  strh r2,[r4,#0x2]
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  sub.w r8,r7,#0xe10
  b 0x2c62ab56
  ldr r1,[0x2c62ac80]
  cmp.w r6,#0x100
  ldr r0,[0x2c62ac84]
  ldr r1,[r1,#0x0]
  ldr r0,[r0,#0x0]
  bne 0x2c62abf8
  mul r6,r1,r2
  mul r1,r3,r1
  mls r6,r0,r3,r6
  ldrh r3,[r5,#0x0]
  mla r2,r0,r2,r1
  add.w r3,r3,r6, asr #0xa
  strh r3,[r4,#0x0]
  ldrh r1,[r5,#0x2]
  add.w r2,r1,r2, asr #0xa
  strh r2,[r4,#0x2]
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
