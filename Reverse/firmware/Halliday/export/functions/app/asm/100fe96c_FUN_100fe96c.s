; FUN_100fe96c @ 0x100fe96c size=264
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  ldrd r3,r4,[r0,#0x310]
  mov r8,r0
  ldr.w r0,[r0,#0x318]
  sub sp,#0xc
  add.w r9,r3,r4
  cmp r0,#0x0
  beq 0x100fea6a
  adds r5,r3,#0x4
  adds r3,#0xa
  cmp r9,r3
  bcc 0x100fea6e
  movs r3,#0x0
  mov.w r12,#0x1
  ldr.w r10,[r8,#0x31c]
  str r3,[sp,#0x4]
  orr.w r7,r2,r1, lsl #0x10
  ldrb r1,[r5,#0x2]
  ldrb r3,[r5,#0x3]
  mov r2,r5
  orr.w r3,r3,r1, lsl #0x8
  add r5,r3
  cmp r5,r9
  it cs
  mov.cs r5,r9
  tst.w r10,r12
  beq 0x100fea1c
  ldrb r1,[r2,#0x6]
  ldrb r3,[r2,#0x7]
  add.w r4,r2,#0xe
  orr.w r3,r3,r1, lsl #0x8
  add.w r6,r3,r3, lsl #0x1
  subs r1,r5,r4
  cmp.w r1,r6, lsl #0x1
  bge 0x100fe9d6
  ldr r3,[0x100fea74]
  smull r6,r3,r3,r1
  sub.w r3,r3,r1, asr #0x1f
  ldrb r1,[r2,#0x4]
  ldrb.w lr,[r2,#0x5]
  orr.w lr,lr,r1, lsl #0x8
  lsrs.w r6,lr,#0x8
  bne 0x100fea1c
  ldr.w r2,[r8,#0x320]
  tst.w r12,r2
  bne 0x100fea42
  cbnz r3,0x100fe9fc
  b 0x100fea1c
  subs r3,#0x1
  add.w r4,r4,#0x6
  beq 0x100fea1c
  ldr r2,[r4,#0x0]
  rev r2,r2
  cmp r7,r2
  bne 0x100fe9f4
  ldrb r2,[r4,#0x4]
  ldrb r3,[r4,#0x5]
  orr.w r3,r3,r2, lsl #0x8
  sxth r3,r3
  tst lr,#0x8
  ittt eq
  ldr.eq r2,[sp,#0x4]
  add.eq r2,r2,r3
  mov.eq r3,r2
  str r3,[sp,#0x4]
  subs r0,#0x1
  lsl.w r12,r12,#0x1
  beq 0x100fea2a
  adds r3,r5,#0x6
  cmp r9,r3
  bcs 0x100fe99c
  ldr r0,[sp,#0x4]
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  ldr.w r1,[r4,r1,lsl #0x1]
  rev r1,r1
  cmp r7,r1
  beq 0x100fea5a
  ite ls
  mov.ls r3,r2
  add.hi r6,r2,#0x1
  adds r2,r3,r6
  bic r1,r2,#0x1
  add.w r1,r1,r2, lsr #0x1
  cmp r3,r6
  lsr.w r2,r2,#0x1
  add.w r11,r4,r1, lsl #0x1
  bhi 0x100fea32
  b 0x100fea1c
  ldrb.w r2,[r11,#0x4]
  ldrb.w r3,[r11,#0x5]
  orr.w r3,r3,r2, lsl #0x8
  sxth r3,r3
  b 0x100fea0e
  str r0,[sp,#0x4]
  b 0x100fea2a
  movs r3,#0x0
  str r3,[sp,#0x4]
  b 0x100fea2a
