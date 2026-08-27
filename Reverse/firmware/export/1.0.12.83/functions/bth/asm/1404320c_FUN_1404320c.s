; FUN_1404320c @ 0x1404320c size=576
  push {r4,r5,r6,r7,r8,r9,r10,lr}
  sub sp,#0x18
  mov r7,lr
  mov r5,r0
  mov r4,r1
  mov r6,r2
  bl 0x1404feb4
  cmp r0,#0x0
  beq 0x14043320
  cmp r4,#0x3
  bne.w 0x14043416
  strd r4,r6,[sp,#0xc]
  ldr.w r8,[0x14043480]
  str r5,[sp,#0x4]
  ldr.w r3,[r8,r5,lsl #0x2]
  movw r1,#0xa07
  str r3,[sp,#0x8]
  ldr r3,[0x1404344c]
  ldr r2,[0x14043450]
  str r3,[sp,#0x0]
  movs r0,#0x4
  ldr r3,[0x14043454]
  bl 0x1402a6e8
  mrs r12,basepri
  cmp.w r12,#0x40
  beq 0x1404327a
  mov lr,pc
  ldr r0,[0x14043458]
  ldr r2,[0x1404345c]
  ldrb r1,[r0,#0x0]
  ldr r3,[0x14043460]
  strd lr,r7,[r2,#0x0]
  adds r2,r1,#0x1
  umull lr,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r0,#0x0]
  ldr r3,[0x14043464]
  str.w r7,[r3,r1,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  cmp r4,#0x3
  beq.w 0x140433be
  cmp r6,#0x0
  beq 0x1404332c
  movs r2,#0x1
  ldr.w r0,[r8,r5,lsl #0x2]
  lsls r2,r4
  ands.w r3,r0,r2
  bne 0x14043388
  orrs r0,r2
  ldr r2,[0x14043468]
  str.w r0,[r8,r5,lsl #0x2]
  mov r1,r2
  lsl.w r9,r4,#0x3
  add.w lr,r2,#0x40
  add.w r8,r2,r4, lsl #0x3
  b 0x140432b4
  ldrb.w r3,[r1,#0x8]!
  lsr.w r3,r0,r3
  lsls r3,r3,#0x1f
  bpl 0x140432c8
  ldrb.w r10,[r1,#0x1]
  ldrb.w r3,[r8,#0x1]
  cmp r10,r3
  bhi 0x14043388
  cmp r1,lr
  bne 0x140432b0
  add.w r0,r2,r9
  cmp.w r12,#0x0
  bne 0x140432de
  mov.w r2,#0xffffffff
  ldr r3,[0x1404345c]
  str r2,[r3,#0x0]
  ldr r1,[0x1404346c]
  ldr.w lr,[0x14043474]
  ldrb r2,[r1,#0x0]
  ldr r3,[0x14043460]
  str.w r7,[lr,r2,lsl #0x2]
  adds r2,#0x1
  umull r7,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r1,#0x0]
  msr basepri,r12
  cmp r0,#0x0
  beq.w 0x14043440
  ldrb r3,[r0,#0x6]
  ldrh r2,[r0,#0x4]
  ldrh r1,[r0,#0x2]
  str r3,[sp,#0x0]
  mov r0,r5
  movw r3,#0x1770
  bl 0x140429b8
  add sp,#0x18
  pop.w {r4,r5,r6,r7,r8,r9,r10,pc}
  cmp r4,#0x8
  bls 0x14043228
  mov r1,r4
  ldr r0,[0x14043470]
  bl 0x1402b0f8
  movs r3,#0x1
  ldr.w r1,[r8,r5,lsl #0x2]
  lsls r3,r4
  tst r3,r1
  beq 0x14043388
  ldr r2,[0x14043468]
  bic.w r1,r1,r3
  add.w r3,r2,r4, lsl #0x3
  str.w r1,[r8,r5,lsl #0x2]
  ldrb.w r8,[r3,#0x1]
  cmp r1,#0x0
  beq 0x1404343c
  mov r3,r6
  mov r0,r6
  add.w lr,r2,#0x40
  b 0x1404336c
  ldrb.w r9,[r2,#0x1]
  ldrb r3,[r0,#0x1]
  cmp r9,r3
  it hi
  mov.hi r0,r2
  cmp r2,lr
  beq 0x1404337e
  ldrb.w r3,[r2,#0x8]!
  lsr.w r3,r1,r3
  lsls r3,r3,#0x1f
  bpl 0x14043364
  cmp r0,#0x0
  bne 0x14043358
  cmp r2,lr
  mov r0,r2
  bne 0x14043368
  cmp r0,#0x0
  beq 0x140432d0
  ldrb r3,[r0,#0x1]
  cmp r3,r8
  bls 0x140432d0
  cmp.w r12,#0x0
  bne 0x14043396
  mov.w r2,#0xffffffff
  ldr r3,[0x1404345c]
  str r2,[r3,#0x0]
  ldr r1,[0x1404346c]
  ldr r3,[0x14043474]
  ldrb r2,[r1,#0x0]
  str.w r7,[r3,r2,lsl #0x2]
  ldr r3,[0x14043460]
  adds r2,#0x1
  umull r0,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r1,#0x0]
  msr basepri,r12
  add sp,#0x18
  pop.w {r4,r5,r6,r7,r8,r9,r10,pc}
  ldr r3,[0x14043478]
  rsb r2,r5,r5, lsl #0x3
  add.w r3,r3,r2, lsl #0x3
  ldrh.w r3,[r3,#0x450]
  cmp r3,#0xc
  bne.w 0x14043286
  cmp.w r12,#0x0
  bne 0x140433e0
  mov.w r2,#0xffffffff
  ldr r3,[0x1404345c]
  str r2,[r3,#0x0]
  ldr r1,[0x1404346c]
  ldr r3,[0x14043474]
  ldrb r2,[r1,#0x0]
  str.w r7,[r3,r2,lsl #0x2]
  ldr r3,[0x14043460]
  adds r2,#0x1
  umull r0,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r1,#0x0]
  msr basepri,r12
  ldr r0,[0x1404347c]
  movw r1,#0xa12
  str r0,[sp,#0x0]
  ldr r3,[0x14043454]
  ldr r2,[0x14043450]
  movs r0,#0x4
  bl 0x1402a6e8
  b 0x1404331a
  ldr r3,[0x14043480]
  ldr r0,[0x14043484]
  ldr.w r3,[r3,r5,lsl #0x2]
  movw r1,#0x9f2
  strd r0,r5,[sp,#0x0]
  str r3,[sp,#0x8]
  strd r4,r6,[sp,#0xc]
  ldr r3,[0x14043454]
  ldr r2,[0x14043450]
  movs r0,#0x4
  bl 0x1402a6e8
  add sp,#0x18
  pop.w {r4,r5,r6,r7,r8,r9,r10,pc}
  mov r0,r2
  b 0x140432d0
  mov r3,r6
  mov r2,r4
  mov r1,r5
  ldr r0,[0x14043488]
  bl 0x1402b0f8
