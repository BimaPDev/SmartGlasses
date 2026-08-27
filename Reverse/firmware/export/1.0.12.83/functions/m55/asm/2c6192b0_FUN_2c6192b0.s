; FUN_2c6192b0 @ 0x2c6192b0 size=1226
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  ldr r3,[0x2c61931c]
  mov r0,r1
  mov r5,r1
  vpush {d8}
  sub sp,#0xdc
  ldr r3,[r3,#0x0]
  str r3,[sp,#0xd4]
  mov.w r3,#0x0
  bl 0x2c602408
  sub.w r3,r0,#0x15
  uxtb r3,r3
  cmp r3,#0x1
  bls 0x2c619324
  mov r1,r5
  ldr r0,[0x2c619320]
  bl 0x2c602110
  cmp r0,#0x1
  beq 0x2c6192fc
  ldr r3,[0x2c61931c]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0xd4]
  eors r2,r3
  mov.w r3,#0x0
  bne.w 0x2c61977e
  add sp,#0xdc
  vpop {d8}
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  ldr r3,[0x2c61931c]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0xd4]
  eors r2,r3
  mov.w r3,#0x0
  bne.w 0x2c61977e
  mov r0,r5
  add sp,#0xdc
  vpop {d8}
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  b.w 0x2c602400
  mov r6,r0
  mov r0,r5
  bl 0x2c602400
  mov r4,r0
  cmp r6,#0x15
  bne 0x2c6192e2
  add r3,sp,#0x7c
  mov.w r10,#0xff
  vmov s16,r3
  mov r0,r3
  bl 0x2c61314c
  mov r0,r4
  vmov r2,s16
  movs r1,#0x0
  bl 0x2c6004cc
  ldrb.w r3,[r4,#0x26]
  mov r0,r5
  ldr r5,[sp,#0xc4]
  ldrb.w r1,[r4,#0x24]
  str r3,[sp,#0x4]
  ubfx r2,r5,#0x10,#0x8
  ldr r3,[sp,#0x80]
  add.w r2,r2,r2, lsl #0x1
  ldrb.w r7,[r4,#0x25]
  str r3,[sp,#0x8]
  mov r3,r1
  ubfx r1,r5,#0x8,#0x8
  ldr r6,[sp,#0xb0]
  strb.w r10,[sp,#0xc7]
  add.w r2,r2,r1, lsl #0x2
  ubfx r12,r6,#0x10,#0x8
  str r3,[sp,#0xc]
  uxtab r5,r2,r5,#0x0
  ldr r2,[sp,#0x4]
  add.w r12,r12,r12, lsl #0x1
  strb.w r10,[sp,#0x83]
  ubfx r5,r5,#0x3,#0xd
  mul r2,r2,r5
  mul r1,r7,r5
  add.w lr,r2,r2, lsl #0x8
  mul r5,r3,r5
  ldr r3,[sp,#0x8]
  add.w r2,r2,lr, lsl #0x7
  ubfx lr,r3,#0x10,#0x8
  ldr r3,[sp,#0x8]
  lsrs r2,r2,#0x17
  add.w lr,lr,lr, lsl #0x1
  strb.w r2,[sp,#0xc6]
  str r2,[sp,#0x1c]
  add.w r2,r1,r1, lsl #0x8
  add.w r1,r1,r2, lsl #0x7
  add.w r2,r5,r5, lsl #0x8
  lsrs r1,r1,#0x17
  add.w r5,r5,r2, lsl #0x7
  strb.w r1,[sp,#0xc5]
  str r1,[sp,#0x20]
  ubfx r1,r6,#0x8,#0x8
  lsrs r5,r5,#0x17
  add.w r1,r12,r1, lsl #0x2
  strb.w r5,[sp,#0xc4]
  uxtab r1,r1,r6,#0x0
  ldrb.w r9,[r4,#0x26]
  ldrb.w r2,[r4,#0x25]
  ubfx r1,r1,#0x3,#0xd
  str r5,[sp,#0x24]
  ldrb.w r5,[r4,#0x24]
  mul r9,r1,r9
  ldr r6,[sp,#0x84]
  mul r2,r1,r2
  add.w r11,r9,r9, lsl #0x8
  mul r1,r5,r1
  ldr r5,[sp,#0xb8]
  ubfx r12,r6,#0x10,#0x8
  add.w r9,r9,r11, lsl #0x7
  strb.w r10,[sp,#0xb3]
  ubfx r8,r5,#0x10,#0x8
  add.w r12,r12,r12, lsl #0x1
  lsr.w r9,r9,#0x17
  add.w r8,r8,r8, lsl #0x1
  strb.w r9,[sp,#0xb2]
  str.w r9,[sp,#0x14]
  add.w r9,r2,r2, lsl #0x8
  add.w r2,r2,r9, lsl #0x7
  add.w r9,r1,r1, lsl #0x8
  lsrs r2,r2,#0x17
  add.w r1,r1,r9, lsl #0x7
  ubfx r9,r5,#0x8,#0x8
  strb.w r2,[sp,#0xb1]
  add.w r8,r8,r9, lsl #0x2
  lsrs r1,r1,#0x17
  uxtab r5,r8,r5,#0x0
  ubfx r8,r3,#0x8,#0x8
  strb.w r1,[sp,#0xb0]
  add.w lr,lr,r8, lsl #0x2
  ubfx r5,r5,#0x3,#0xd
  ldrb.w r9,[r4,#0x26]
  uxtab r3,lr,r3,#0x0
  ubfx lr,r6,#0x8,#0x8
  mul r9,r5,r9
  add.w r12,r12,lr, lsl #0x2
  str r1,[sp,#0x18]
  ldrb.w r8,[r4,#0x25]
  ubfx r3,r3,#0x3,#0xd
  uxtab r12,r12,r6,#0x0
  ldrb.w r6,[r4,#0x24]
  mul r8,r5,r8
  add.w r11,r9,r9, lsl #0x8
  mul r6,r5,r6
  ldr r5,[sp,#0xc]
  add.w r9,r9,r11, lsl #0x7
  mul lr,r7,r3
  mul r5,r5,r3
  add.w r11,r6,r6, lsl #0x8
  lsr.w r9,r9,#0x17
  str r7,[sp,#0x2c]
  add.w r11,r6,r11, lsl #0x7
  ldr r7,[sp,#0x4]
  add.w r6,r5,r5, lsl #0x8
  strb.w r9,[sp,#0xba]
  mul r3,r7,r3
  ubfx r12,r12,#0x3,#0xd
  ldr r7,[sp,#0xc]
  add.w r5,r5,r6, lsl #0x7
  str.w r9,[sp,#0x10]
  add.w r6,lr,lr, lsl #0x8
  add.w r9,r8,r8, lsl #0x8
  str.w r12,[sp,#0x28]
  add.w lr,lr,r6, lsl #0x7
  mul r12,r7,r12
  add.w r8,r8,r9, lsl #0x7
  strb.w r10,[sp,#0xbb]
  add.w r6,r3,r3, lsl #0x8
  ldr r1,[sp,#0x18]
  lsr.w r9,r8,#0x17
  strb.w r10,[sp,#0x87]
  lsr.w r11,r11,#0x17
  add.w r3,r3,r6, lsl #0x7
  strb.w r9,[sp,#0xb9]
  add.w r6,r12,r12, lsl #0x8
  strb.w r11,[sp,#0xb8]
  lsrs r3,r3,#0x17
  add.w r12,r12,r6, lsl #0x7
  ldrb.w r6,[r4,#0x28]
  lsrs r5,r5,#0x17
  mul r3,r6,r3
  lsr.w lr,lr,#0x17
  lsr.w r12,r12,#0x17
  mul r5,r6,r5
  str r3,[sp,#0x8]
  mov r3,r6
  mul lr,r6,lr
  mul r12,r6,r12
  mul r1,r6,r1
  mul r2,r6,r2
  ldr r6,[sp,#0x14]
  str r3,[sp,#0xc]
  mul r8,r3,r6
  add.w r6,r5,r5, lsl #0x8
  ldr r3,[sp,#0x8]
  add.w r5,r5,r6, lsl #0x7
  ldr r6,[sp,#0x1c]
  lsrs r5,r5,#0x17
  strb.w r5,[sp,#0x80]
  add.w r5,lr,lr, lsl #0x8
  add.w lr,lr,r5, lsl #0x7
  add.w r5,r3,r3, lsl #0x8
  lsr.w lr,lr,#0x17
  add.w r3,r3,r5, lsl #0x7
  ldr r5,[sp,#0x24]
  strb.w lr,[sp,#0x81]
  lsrs r3,r3,#0x17
  strb.w r3,[sp,#0x82]
  add.w r3,r12,r12, lsl #0x8
  add.w r12,r12,r3, lsl #0x7
  add.w r3,r1,r1, lsl #0x8
  lsr.w r12,r12,#0x17
  add.w r1,r1,r3, lsl #0x7
  add.w r3,r2,r2, lsl #0x8
  strb.w r12,[sp,#0x84]
  lsrs r1,r1,#0x17
  add.w r2,r2,r3, lsl #0x7
  add.w r3,r8,r8, lsl #0x8
  strb.w r1,[sp,#0xb0]
  lsrs r2,r2,#0x17
  ldr r1,[sp,#0x20]
  add.w r8,r8,r3, lsl #0x7
  ldr r3,[sp,#0x8c]
  strb.w r2,[sp,#0xb1]
  lsr.w r8,r8,#0x17
  strb.w r10,[sp,#0x8f]
  ubfx r12,r3,#0x10,#0x8
  strb.w r8,[sp,#0xb2]
  ldrb.w r2,[r4,#0x28]
  add.w r12,r12,r12, lsl #0x1
  mul r5,r2,r5
  mul r1,r2,r1
  add.w lr,r5,r5, lsl #0x8
  mul r2,r6,r2
  add.w r5,r5,lr, lsl #0x7
  lsrs r5,r5,#0x17
  strb.w r5,[sp,#0xc4]
  add.w r5,r1,r1, lsl #0x8
  add.w r1,r1,r5, lsl #0x7
  ldr r5,[sp,#0x10]
  lsrs r1,r1,#0x17
  strb.w r1,[sp,#0xc5]
  add.w r1,r2,r2, lsl #0x8
  add.w r2,r2,r1, lsl #0x7
  lsrs r2,r2,#0x17
  strb.w r2,[sp,#0xc6]
  ldrb.w r2,[r4,#0x28]
  mul r8,r2,r9
  mul r11,r2,r11
  mul r9,r2,r5
  ubfx r2,r3,#0x8,#0x8
  add.w r12,r12,r2, lsl #0x2
  add.w r2,r11,r11, lsl #0x8
  uxtab r3,r12,r3,#0x0
  add.w r11,r11,r2, lsl #0x7
  add.w r2,r8,r8, lsl #0x8
  ubfx r3,r3,#0x3,#0xd
  lsr.w r11,r11,#0x17
  add.w r8,r8,r2, lsl #0x7
  mul r1,r7,r3
  add.w r2,r9,r9, lsl #0x8
  strb.w r11,[sp,#0xb8]
  lsr.w r8,r8,#0x17
  add.w r2,r9,r2, lsl #0x7
  strb.w r8,[sp,#0xb9]
  lsrs r2,r2,#0x17
  ldr.w r8,[0x2c619788]
  strb.w r2,[sp,#0xba]
  ldrb.w r5,[r4,#0x28]
  ldrsh.w r2,[sp,#0xc8]
  subs r5,#0x50
  mul r5,r2,r5
  ldrd r7,r2,[sp,#0x28]
  mul lr,r2,r7
  mov r6,r7
  ldr r7,[sp,#0x4]
  mul r2,r2,r3
  add.w r9,lr,lr, lsl #0x8
  mul r12,r7,r6
  ldr r6,[sp,#0xc]
  add.w lr,lr,r9, lsl #0x7
  mul r3,r7,r3
  add.w r9,r12,r12, lsl #0x8
  lsr.w lr,lr,#0x17
  add.w r12,r12,r9, lsl #0x7
  add.w r9,r1,r1, lsl #0x8
  mul lr,r6,lr
  lsr.w r12,r12,#0x17
  add.w r1,r1,r9, lsl #0x7
  add.w r9,r2,r2, lsl #0x8
  mul r12,r6,r12
  lsrs r1,r1,#0x17
  add.w r2,r2,r9, lsl #0x7
  add.w r9,r3,r3, lsl #0x8
  mul r1,r6,r1
  lsrs r2,r2,#0x17
  add.w r3,r3,r9, lsl #0x7
  mul r2,r6,r2
  lsrs r3,r3,#0x17
  mul r6,r3,r6
  smull r7,r3,r8,r5
  asrs r5,r5,#0x1f
  rsb r5,r5,r3, asr #0x6
  strh.w r5,[sp,#0xc8]
  ldrb.w r3,[r4,#0x28]
  ldrsh.w r5,[sp,#0xce]
  subs r3,#0x50
  mul r3,r5,r3
  smull r5,r8,r8,r3
  asrs r3,r3,#0x1f
  rsb r3,r3,r8, asr #0x6
  strh.w r3,[sp,#0xce]
  add.w r3,lr,lr, lsl #0x8
  add.w lr,lr,r3, lsl #0x7
  add.w r3,r12,r12, lsl #0x8
  lsr.w lr,lr,#0x17
  add.w r12,r12,r3, lsl #0x7
  add.w r3,r1,r1, lsl #0x8
  strb.w lr,[sp,#0x85]
  lsr.w r12,r12,#0x17
  add.w r1,r1,r3, lsl #0x7
  add.w r3,r2,r2, lsl #0x8
  strb.w r12,[sp,#0x86]
  lsrs r1,r1,#0x17
  add.w r2,r2,r3, lsl #0x7
  add.w r3,r6,r6, lsl #0x8
  strb.w r1,[sp,#0x8c]
  lsrs r2,r2,#0x17
  add.w r6,r6,r3, lsl #0x7
  strb.w r2,[sp,#0x8d]
  lsrs r6,r6,#0x17
  strb.w r6,[sp,#0x8e]
  bl 0x2c602608
  mov r5,r0
  mov r1,r0
  add r0,sp,#0x34
  add.w r6,r4,#0x14
  bl 0x2c600b9c
  movs r3,#0x0
  add r2,sp,#0x34
  mov r0,r4
  str r3,[sp,#0x3c]
  movs r1,#0x1a
  str r3,[sp,#0x68]
  ldr r3,[0x2c619784]
  vstr.32 s16,[sp,#0x44]
  str r3,[sp,#0x38]
  str r6,[sp,#0x40]
  bl 0x2c602340
  mov r2,r6
  vmov r1,s16
  mov r0,r5
  bl 0x2c61319c
  add r2,sp,#0x34
  movs r1,#0x1b
  mov r0,r4
  bl 0x2c602340
  b 0x2c6192e2
  bl 0x2c674828
