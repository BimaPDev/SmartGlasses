; FUN_10104e24 @ 0x10104e24 size=494
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  mov r4,r0
  sub sp,#0x19c
  ldr r5,[sp,#0x1c8]
  ldrd r12,lr,[r4,#0x38]
  ldr r4,[r4,#0x18]
  lsls r5,r5,#0x2
  add r7,sp,#0x10
  str r0,[sp,#0x8]
  lsls r1,r1,#0x2
  ldrd r0,r6,[sp,#0x1c0]
  lsls r2,r2,#0x2
  lsl.w r9,r3,#0x2
  lsls r0,r0,#0x2
  lsls r6,r6,#0x2
  cmp.w r4,r5, asr #0x8
  strd r1,r2,[r7,#0x10]
  str r7,[sp,#0xc]
  str.w r9,[r7,#0x8]
  str r0,[r7,#0xc]
  str r6,[r7,#0x0]
  str r5,[sp,#0x14]
  asr.w r8,r5, asr #0x8
  str.w r12,[r7,#0x18]
  str.w lr,[r7,#0x1c]
  bgt 0x10104e74
  cmp.w r4,r0, asr #0x8
  ble.w 0x10104ff6
  ldr r4,[sp,#0x8]
  ldr r4,[r4,#0x14]
  cmp r8,r4
  bge 0x10104e90
  cmp.w r4,r0, asr #0x8
  ble 0x10104e90
  cmp.w r4,r2, asr #0x8
  ble 0x10104e90
  cmp.w r4,lr, asr #0x8
  bgt.w 0x10105006
  ldr.w r8,[sp,#0xc]
  lsl.w r4,lr,#0x1
  lsl.w r7,r12,#0x1
  str r4,[sp,#0x4]
  mov r3,r9
  mov r4,r8
  mov r11,r7
  b 0x10104f12
  cmp.w r8,#0x80
  bgt 0x10104f36
  sub.w r8,r0,r0, lsl #0x2
  add.w r8,r8,r5, lsl #0x1
  adds.w r8,r8,lr
  bmi 0x10104f96
  cmp.w r8,#0x80
  bgt 0x10104f36
  sub.w r8,r1,r1, lsl #0x2
  add r8,r11
  adds.w r8,r8,r6
  bmi 0x10104fb8
  cmp.w r8,#0x80
  bgt 0x10104f36
  ldr r7,[sp,#0x4]
  sub.w r8,r2,r2, lsl #0x2
  add r8,r7
  adds.w r8,r8,r5
  bmi 0x10104fdc
  cmp.w r8,#0x80
  bgt 0x10104f36
  mov r2,r5
  mov r1,r6
  ldr r0,[sp,#0x8]
  bl 0x10104afc
  ldr r3,[sp,#0xc]
  cmp r4,r3
  beq.w 0x1010500c
  ldrd r1,r2,[r4,#-0x8]
  mov lr,r5
  mov r12,r6
  lsls r3,r5,#0x1
  str r3,[sp,#0x4]
  lsl.w r11,r6,#0x1
  ldrd r3,r0,[r4,#-0x10]
  subs r4,#0x18
  ldrd r6,r5,[r4,#0x0]
  sub.w r8,r3,r3, lsl #0x2
  add.w r8,r8,r6, lsl #0x1
  adds.w r8,r8,r12
  bpl 0x10104ea6
  add.w r8,r3,r3, lsl #0x1
  rsb r9,r6,r6, lsl #0x1f
  add.w r8,r8,r9, lsl #0x1
  sub.w r8,r8,r12
  cmp.w r8,#0x80
  ble 0x10104eac
  add r6,r3
  add.w r8,r3,r1
  add r1,r12
  add.w r3,r8,r1
  add r5,r0
  add r8,r6
  add r0,r2
  add r2,lr
  add.w r10,r0,r2
  add.w r9,r5,r0
  asrs r6,r6,#0x1
  add.w r0,r3,r8
  str r6,[r4,#0x8]
  asrs r0,r0,#0x3
  asr.w r6,r8, asr #0x2
  add.w r8,r10,r9
  str r0,[r4,#0x18]
  asrs r1,r1,#0x1
  asrs r2,r2,#0x1
  asrs r5,r5,#0x1
  asrs r3,r3,#0x2
  asr.w r8,r8, asr #0x3
  asr.w r0,r10, asr #0x2
  asr.w r9,r9, asr #0x2
  strd r12,lr,[r4,#0x30]
  str r1,[r4,#0x28]
  str r3,[r4,#0x20]
  str r6,[r4,#0x10]
  str r2,[r4,#0x2c]
  str r5,[r4,#0xc]
  str.w r8,[r4,#0x1c]
  str r0,[r4,#0x24]
  str.w r9,[r4,#0x14]
  adds r4,#0x18
  b 0x10104f0e
  add.w r8,r0,r0, lsl #0x1
  rsb r9,r5,r5, lsl #0x1f
  add.w r8,r8,r9, lsl #0x1
  sub.w r8,r8,lr
  cmp.w r8,#0x80
  bgt 0x10104f36
  sub.w r8,r1,r1, lsl #0x2
  add r8,r11
  adds.w r8,r8,r6
  bpl 0x10104ecc
  add.w r8,r1,r1, lsl #0x1
  rsb r9,r12,r12, lsl #0x1f
  add.w r8,r8,r9, lsl #0x1
  sub.w r8,r8,r6
  cmp.w r8,#0x80
  bgt 0x10104f36
  ldr r7,[sp,#0x4]
  sub.w r8,r2,r2, lsl #0x2
  add r8,r7
  adds.w r8,r8,r5
  bpl 0x10104ee0
  add.w r8,r2,r2, lsl #0x1
  rsb r9,lr,lr, lsl #0x1f
  add.w r8,r8,r9, lsl #0x1
  sub.w r8,r8,r5
  cmp.w r8,#0x80
  ble.w 0x10104ee6
  b 0x10104f36
  cmp.w r4,r2, asr #0x8
  bgt.w 0x10104e74
  cmp.w r4,lr, asr #0x8
  bgt.w 0x10104e74
  ldr r3,[sp,#0x8]
  str r6,[r3,#0x38]
  str r5,[r3,#0x3c]
  add sp,#0x19c
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
