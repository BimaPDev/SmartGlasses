; FUN_100f90e8 @ 0x100f90e8 size=594
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  ldr r3,[0x100f933c]
  mov r5,r0
  ldr r0,[r0,#0x48]
  sub sp,#0x14
  cmp r0,r3
  bne 0x100f91aa
  cmp r2,#0x0
  beq.w 0x100f9248
  ldrd r0,r3,[r2,#0x0]
  cmn r5,#0x6c
  asr.w r7,r0, asr #0x6
  asr.w r6,r3, asr #0x6
  and r0,r0,#0x3f
  and r3,r3,#0x3f
  beq.w 0x100f9258
  ldrsh.w r2,[r5,#0x6e]
  cmp r2,#0x0
  bne 0x100f91b2
  mov r4,r3
  mov r2,r0
  mov r8,r6
  mov r9,r7
  cmp r1,#0x3
  strd r0,r3,[sp,#0x0]
  strd r2,r4,[sp,#0x8]
  beq 0x100f9230
  cmp r1,#0x4
  beq.w 0x100f92d6
  cmp r1,#0x2
  beq.w 0x100f928c
  mov.w r12,#0x2
  adds r2,#0x3f
  add.w r1,r4,#0x3f
  add.w r9,r9,r2, asr #0x6
  add.w r1,r8,r1, asr #0x6
  add.w r7,r7,r0, asr #0x6
  add.w r6,r6,r3, asr #0x6
  cmp.w r12,#0x5
  sub.w r0,r9,r7
  sub.w r3,r1,r6
  beq.w 0x100f92ee
  cmp.w r12,#0x6
  mov r4,r0
  bne 0x100f9178
  add.w r3,r3,r3, lsl #0x1
  mov.w r2,#0x100
  cmn r7,#0x8000
  strd r7,r1,[r5,#0x64]
  strd r3,r0,[r5,#0x4c]
  strb.w r12,[r5,#0x5e]
  str r4,[r5,#0x54]
  strh.w r2,[r5,#0x5c]
  blt 0x100f91aa
  cmp.w r9,#0x8000
  bge 0x100f91aa
  cmn r6,#0x8000
  blt 0x100f91aa
  cmp.w r1,#0x8000
  bge 0x100f91aa
  movs r0,#0x0
  b 0x100f91ac
  movs r0,#0x1
  add sp,#0x14
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  ldr r4,[r5,#0x70]
  add.w r2,r4,r2, lsl #0x3
  add.w r12,r4,#0x8
  cmp r2,r12
  ldrd r10,lr,[r4,#0x0]
  bls.w 0x100f9312
  mov r8,lr
  mov r9,r10
  subs r2,r2,r4
  subs r2,#0x9
  add.w r12,r4,#0x18
  bic r2,r2,#0x7
  add r2,r12
  adds r4,#0x10
  ldrd r11,r12,[r4,#-0x8]
  cmp r10,r11
  it ge
  mov.ge r10,r11
  cmp r9,r11
  it lt
  mov.lt r9,r11
  cmp lr,r12
  it ge
  mov.ge lr,r12
  adds r4,#0x8
  cmp r8,r12
  it lt
  mov.lt r8,r12
  cmp r2,r4
  bne 0x100f91da
  and r2,r9,#0x3f
  and r4,r10,#0x3f
  add r2,r0
  and r12,lr,#0x3f
  add r0,r4
  and r4,r8,#0x3f
  add r4,r3
  cmp r1,#0x3
  add r3,r12
  add.w r9,r7,r9, asr #0x6
  add.w r8,r6,r8, asr #0x6
  strd r0,r3,[sp,#0x0]
  strd r2,r4,[sp,#0x8]
  add.w r7,r7,r10, asr #0x6
  add.w r6,r6,lr, asr #0x6
  bne 0x100f9136
  mov r2,r1
  mov r0,sp
  mov r1,r5
  bl 0x100f8ed8
  ldrd r0,r3,[sp,#0x0]
  ldrd r2,r4,[sp,#0x8]
  mov.w r12,#0x5
  b 0x100f9146
  cmn r5,#0x6c
  mov r3,r2
  mov r0,r2
  mov r6,r2
  mov r7,r2
  bne.w 0x100f911a
  ldrd r4,r8,[sp,#0x8]
  ldrd r12,lr,[sp,#0x0]
  and r2,r4,#0x3f
  add.w r9,r7,r4, asr #0x6
  add.w r7,r7,r12, asr #0x6
  and r12,r12,#0x3f
  and r10,r8,#0x3f
  add r2,r0
  add r0,r12
  and r12,lr,#0x3f
  add.w r4,r10,r3
  add.w r8,r6,r8, asr #0x6
  add r3,r12
  add.w r6,r6,lr, asr #0x6
  b 0x100f912a
  adds r0,#0x1f
  adds r2,#0x20
  add.w r7,r7,r0, asr #0x6
  add.w r9,r9,r2, asr #0x6
  cmp r7,r9
  bne 0x100f92b2
  and r0,r0,#0x3f
  and r2,r2,#0x3f
  add r0,r2
  cmp r0,#0x3f
  ite mi
  add.mi.w r7,r7,#0xffffffff
  add.pl.w r9,r7,#0x1
  adds r3,#0x1f
  adds r4,#0x20
  add.w r6,r6,r3, asr #0x6
  add.w r1,r8,r4, asr #0x6
  cmp r6,r1
  beq 0x100f92fa
  sub.w r0,r9,r7
  subs r3,r1,r6
  add.w r4,r0,#0xf
  asrs r4,r4,#0x4
  mov.w r12,#0x1
  lsls r4,r4,#0x1
  b 0x100f9178
  mov r2,r1
  mov r0,sp
  mov r1,r5
  bl 0x100f8ed8
  ldrd r0,r3,[sp,#0x0]
  ldrd r2,r4,[sp,#0x8]
  mov.w r12,#0x6
  b 0x100f9146
  add.w r0,r0,r0, lsl #0x1
  adds r4,r0,#0x3
  bic r4,r4,#0x3
  b 0x100f9178
  and r3,r3,#0x3f
  and r4,r4,#0x3f
  add r3,r4
  cmp r3,#0x3f
  bmi 0x100f9330
  movs r3,#0x1
  adds r1,r6,#0x1
  sub.w r0,r9,r7
  b 0x100f92c8
  and r4,r10,#0x3f
  and r2,lr,#0x3f
  add r0,r4
  add r3,r2
  add.w r7,r7,r10, asr #0x6
  add.w r6,r6,lr, asr #0x6
  mov r4,r3
  mov r2,r0
  mov r8,r6
  mov r9,r7
  b 0x100f912a
  subs r6,#0x1
  subs r3,r1,r6
  sub.w r0,r9,r7
  b 0x100f92c8
