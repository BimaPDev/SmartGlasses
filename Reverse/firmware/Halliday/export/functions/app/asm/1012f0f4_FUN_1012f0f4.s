; FUN_1012f0f4 @ 0x1012f0f4 size=288
  push {r0,r1,r2,r4,r5,r6,r7,r8,r9,lr}
  mov r5,r0
  mov r0,r1
  ldr r1,[r5,#0x14]
  mov r6,r2
  ldr r7,[sp,#0x28]
  cmp r1,#0x0
  bne 0x1012f1d4
  cmp r7,#0x1
  bne 0x1012f116
  lsls r2,r3,#0x2
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,lr}
  b.w 0x1011ea48
  ldrsh.w r4,[r5,#0x4]
  cbnz r4,0x1012f12e
  lsls r2,r3,#0x2
  mov r1,r4
  str r2,[sp,#0x4]
  bl 0x1011ea48
  mov r1,r4
  mov r0,r6
  ldr r2,[sp,#0x4]
  b 0x1012f10c
  lsls r2,r3,#0x3
  b 0x1012f10c
  cmp r7,#0x1
  bne 0x1012f172
  ldr.w r1,[r0,r4,lsl #0x2]
  smull r8,r9,r2,r1
  lsr.w r1,r8,#0x1b
  orr.w r1,r1,r9, lsl #0x5
  str.w r1,[r0,r4,lsl #0x2]
  ldr r1,[r5,#0x14]
  sub.w r2,r2,r12
  subs r1,#0x1
  str r1,[r5,#0x14]
  add.w lr,r4,#0x1
  cmp r1,#0x0
  bne 0x1012f1ea
  strh r1,[r5,#0x2]
  str r1,[r5,#0x1c]
  movs r2,#0x0
  adds r4,#0x1
  add.w r12,r0,#0x4
  cmp r4,r3
  blt 0x1012f1ee
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,pc}
  ldrsh.w r1,[r5,#0x4]
  cbnz r1,0x1012f1a2
  ldr.w r1,[r0,r4,lsl #0x2]
  smull r8,r9,r2,r1
  lsr.w r1,r8,#0x1b
  orr.w r1,r1,r9, lsl #0x5
  str.w r1,[r0,r4,lsl #0x2]
  ldr.w r1,[r6,r4,lsl #0x2]
  smull r8,r9,r2,r1
  lsr.w r1,r8,#0x1b
  orr.w r1,r1,r9, lsl #0x5
  str.w r1,[r6,r4,lsl #0x2]
  b 0x1012f14a
  ldr.w r1,[r0,r4,lsl #0x3]
  lsl.w lr,r4,#0x3
  smull r8,r9,r2,r1
  lsr.w r1,r8,#0x1b
  orr.w r1,r1,r9, lsl #0x5
  str.w r1,[r0,r4,lsl #0x3]
  add.w lr,lr,#0x4
  ldr.w r1,[r0,lr]
  smull r8,r9,r2,r1
  lsr.w r1,r8,#0x1b
  orr.w r1,r1,r9, lsl #0x5
  str.w r1,[r0,lr]
  b 0x1012f14a
  movs r4,#0x0
  ldrd r12,r2,[r5,#0x18]
  cmp r4,r3
  blt 0x1012f132
  ldrsh.w r1,[r5,#0x2]
  cmp r1,#0x0
  beq 0x1012f160
  str r2,[r5,#0x1c]
  b 0x1012f16c
  mov r4,lr
  b 0x1012f1da
  cmp r7,#0x1
  bne 0x1012f1fa
  str.w r2,[r0,r4,lsl #0x2]
  adds r4,#0x1
  b 0x1012f168
  ldrsh.w r1,[r5,#0x4]
  cbnz r1,0x1012f20a
  str.w r1,[r0,r4,lsl #0x2]
  str.w r1,[r6,r4,lsl #0x2]
  b 0x1012f1f6
  str.w r2,[r0,r4,lsl #0x3]
  str.w r2,[r12,r4,lsl #0x3]
  b 0x1012f1f6
