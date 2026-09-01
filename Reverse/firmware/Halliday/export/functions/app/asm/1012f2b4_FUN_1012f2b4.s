; FUN_1012f2b4 @ 0x1012f2b4 size=284
  push {r0,r1,r2,r4,r5,r6,r7,r8,r9,lr}
  mov r5,r0
  mov r0,r1
  ldr r1,[r5,#0x14]
  mov r6,r2
  ldr r7,[sp,#0x28]
  cmp r1,#0x0
  bne 0x1012f390
  cmp r7,#0x1
  bne 0x1012f2d6
  lsls r2,r3,#0x1
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,lr}
  b.w 0x1011ea48
  ldrsh.w r4,[r5,#0x4]
  cbnz r4,0x1012f2ee
  lsls r2,r3,#0x1
  mov r1,r4
  str r2,[sp,#0x4]
  bl 0x1011ea48
  mov r1,r4
  mov r0,r6
  ldr r2,[sp,#0x4]
  b 0x1012f2cc
  lsls r2,r3,#0x2
  b 0x1012f2cc
  cmp r7,#0x1
  bne 0x1012f332
  ldrsh.w r8,[r0,r4,lsl #0x1]
  smull r8,r9,r8,r2
  lsr.w r1,r8,#0x1b
  orr.w r1,r1,r9, lsl #0x5
  strh.w r1,[r0,r4,lsl #0x1]
  ldr r1,[r5,#0x14]
  sub.w r2,r2,r12
  subs r1,#0x1
  str r1,[r5,#0x14]
  add.w lr,r4,#0x1
  cmp r1,#0x0
  bne 0x1012f3a6
  strh r1,[r5,#0x2]
  str r1,[r5,#0x1c]
  movs r2,#0x0
  adds r4,#0x1
  add.w r12,r0,#0x2
  cmp r4,r3
  blt 0x1012f3aa
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,pc}
  ldrsh.w r1,[r5,#0x4]
  cbnz r1,0x1012f362
  ldrsh.w r8,[r0,r4,lsl #0x1]
  smull r8,r9,r8,r2
  lsr.w r1,r8,#0x1b
  orr.w r1,r1,r9, lsl #0x5
  strh.w r1,[r0,r4,lsl #0x1]
  ldrsh.w r8,[r6,r4,lsl #0x1]
  smull r8,r9,r8,r2
  lsr.w r1,r8,#0x1b
  orr.w r1,r1,r9, lsl #0x5
  strh.w r1,[r6,r4,lsl #0x1]
  b 0x1012f30a
  ldrsh.w r8,[r0,r4,lsl #0x2]
  lsls r1,r4,#0x2
  smull r8,r9,r8,r2
  lsr.w lr,r8,#0x1b
  orr.w lr,lr,r9, lsl #0x5
  strh.w lr,[r0,r4,lsl #0x2]
  adds r1,#0x2
  ldrsh.w r8,[r0,r1]
  smull r8,r9,r8,r2
  lsr.w lr,r8,#0x1b
  orr.w lr,lr,r9, lsl #0x5
  strh.w lr,[r0,r1]
  b 0x1012f30a
  movs r4,#0x0
  ldrd r12,r2,[r5,#0x18]
  cmp r4,r3
  blt 0x1012f2f2
  ldrsh.w r1,[r5,#0x2]
  cmp r1,#0x0
  beq 0x1012f320
  str r2,[r5,#0x1c]
  b 0x1012f32c
  mov r4,lr
  b 0x1012f396
  cmp r7,#0x1
  bne 0x1012f3b6
  strh.w r2,[r0,r4,lsl #0x1]
  adds r4,#0x1
  b 0x1012f328
  ldrsh.w r1,[r5,#0x4]
  cbnz r1,0x1012f3c6
  strh.w r1,[r0,r4,lsl #0x1]
  strh.w r1,[r6,r4,lsl #0x1]
  b 0x1012f3b2
  strh.w r2,[r0,r4,lsl #0x2]
  strh.w r2,[r12,r4,lsl #0x2]
  b 0x1012f3b2
