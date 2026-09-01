; FUN_10105038 @ 0x10105038 size=272
  push {r4,r5,r6,r7,r8,r9,lr}
  mov r8,r0
  sub sp,#0x10c
  ldr r0,[sp,#0x128]
  ldr.w r7,[r8,#0x18]
  lsls r0,r0,#0x2
  lsl.w r12,r1,#0x2
  lsls r3,r3,#0x2
  lsls r4,r2,#0x2
  cmp.w r7,r0, asr #0x8
  ldrd r5,r6,[r8,#0x38]
  str.w r12,[sp,#0x8]
  str r5,[sp,#0x10]
  str r3,[sp,#0x0]
  str r6,[sp,#0x14]
  str r4,[sp,#0xc]
  str r0,[sp,#0x4]
  asr.w r12,r0, asr #0x8
  bgt 0x10105078
  cmp.w r7,r4, asr #0x8
  bgt 0x10105078
  cmp.w r7,r6, asr #0x8
  ble 0x1010513e
  ldr.w r7,[r8,#0x14]
  cmp r12,r7
  bge 0x1010508c
  cmp.w r7,r4, asr #0x8
  ble 0x1010508c
  cmp.w r7,r6, asr #0x8
  bgt 0x1010513e
  adds r4,r3,r5
  rsb r3,r1,r1, lsl #0x1d
  adds.w r5,r4,r3, lsl #0x3
  it mi
  rsb.mi r5,r4,r1, lsl #0x3
  add r0,r6
  rsb r1,r2,r2, lsl #0x1d
  adds.w r3,r0,r1, lsl #0x3
  it mi
  rsb.mi r3,r0,r2, lsl #0x3
  cmp r3,r5
  it lt
  mov.lt r3,r5
  cmp r3,#0x40
  mov.w r7,#0x1
  ble 0x101050c4
  asrs r3,r3,#0x2
  cmp r3,#0x40
  lsl.w r7,r7,#0x1
  bgt 0x101050ba
  mov r6,sp
  rsb.w r12,r7,#0x0
  and.w r12,r12,r7
  asrs.w r12,r12, asr #0x1
  beq 0x1010512a
  ldrd r2,r4,[r6,#0x4]
  mov r3,r6
  ldr r5,[r6,#0xc]
  ldr.w r9,[r6,#0x14]
  ldr.w lr,[r6,#0x10]
  ldr r1,[r6,#0x0]
  adds r0,r1,r4
  adds r6,r5,r2
  add r4,lr
  add r5,r9
  adds r1,r0,r4
  adds r2,r6,r5
  asrs r1,r1,#0x2
  asrs r6,r6,#0x1
  asrs r4,r4,#0x1
  asrs r0,r0,#0x1
  asrs r2,r2,#0x2
  asrs r5,r5,#0x1
  asrs.w r12,r12, asr #0x1
  str r6,[r3,#0xc]
  strd lr,r9,[r3,#0x20]
  mov r6,r3
  str r1,[r3,#0x10]
  str r4,[r3,#0x18]
  str r0,[r3,#0x8]
  str r2,[r3,#0x14]
  str r5,[r3,#0x1c]
  add.w r3,r3,#0x10
  bne 0x101050e6
  mov r0,r8
  bl 0x10104afc
  subs r7,#0x1
  bne 0x101050c6
  add sp,#0x10c
  pop.w {r4,r5,r6,r7,r8,r9,pc}
  ldrd r1,r2,[r6,#0x0]
  mov r0,r8
  bl 0x10104afc
  subs r7,#0x1
  sub.w r6,r6,#0x10
  bne 0x101050c6
  b 0x10105124
  strd r3,r0,[r8,#0x38]
  add sp,#0x10c
  pop.w {r4,r5,r6,r7,r8,r9,pc}
