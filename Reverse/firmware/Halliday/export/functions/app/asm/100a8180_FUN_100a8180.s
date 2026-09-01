; FUN_100a8180 @ 0x100a8180 size=662
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  sub sp,#0x24
  mov r4,r0
  ldr r5,[sp,#0x48]
  ldrb.w r8,[sp,#0x50]
  bl 0x1011dc4c
  mov r7,r0
  cmp r0,#0x0
  bne 0x100a8280
  bl 0x100a7a0c
  ldr.w r9,[r4,#0x1c]
  cmp.w r9,#0x0
  beq 0x100a827c
  cmp.w r8,#0x10
  bne 0x100a827c
  ldrb r3,[r4,#0x7]
  ldr r6,[sp,#0x4c]
  movs r2,#0x18
  mov r1,r7
  add r0,sp,#0x8
  sdiv r6,r6,r3
  bl 0x1011ea48
  ldr r3,[r4,#0x48]
  mov r0,r9
  str r3,[sp,#0x0]
  ldr r3,[r4,#0x4c]
  str.w r8,[sp,#0x18]
  str r3,[sp,#0x4]
  ldrb.w r3,[r4,#0x21]
  uxth r6,r6
  str r3,[sp,#0x10]
  bl 0x1012d608
  cmp r0,#0x0
  bgt 0x100a81e2
  ldr r3,[r4,#0x44]
  cmp r3,#0x0
  ble 0x100a827c
  movs r7,#0x5
  ldr r2,[r4,#0x44]
  mov r0,r6
  cmp r6,r2
  it ge
  mov.ge r0,r2
  ldr r3,[r4,#0x40]
  ldr r1,[r4,#0x50]
  sub.w r12,r3,r2
  ldr r3,[r4,#0x54]
  add.w r1,r1,r12, lsl #0x1
  add.w r12,r3,r12, lsl #0x1
  ldr r3,[r4,#0x5c]
  uxth.w lr,r0
  cbnz r3,0x100a8228
  ldrb r2,[r4,#0x1]
  ldrb.w r9,[r4,#0x2]
  cmp r2,#0x3
  mov r2,lr
  bne.w 0x100a837c
  cmp.w r9,#0x1
  bls.w 0x100a8376
  mov r10,r5
  cmp r3,r2
  add.w r10,r10,#0x8
  blt 0x100a8310
  ldr r3,[r4,#0x44]
  uxth r0,r0
  sub.w r6,r6,lr
  subs r0,r3,r0
  uxth r6,r6
  str r0,[r4,#0x44]
  cbz r6,0x100a827c
  movs r3,#0x0
  mov r0,sp
  str r3,[sp,#0x14]
  ldr r2,[r4,#0x3c]
  mvn r3,#0x80000000
  ldr r1,[r4,#0x1c]
  bl 0x100af5dc
  cmp r0,#0x0
  bgt.w 0x100a83fe
  ldr r0,[r4,#0x1c]
  bl 0x1012d630
  cbnz r0,0x100a827c
  subs r7,#0x1
  cmp r7,#0x0
  bgt.w 0x100a83f6
  ldr r0,[0x100a8418]
  ldr r3,[0x100a841c]
  ldr r2,[0x100a8420]
  subs r0,r0,r3
  lsls r0,r0,#0x5
  and r0,r0,#0xff00
  orr r0,r0,#0x910000
  ldr r1,[0x100a8424]
  orr r0,r0,#0x11
  bl 0x100a5b78
  bl 0x100a7a24
  ldrb r3,[r4,#0x9]
  lsls r1,r3,#0x1e
  bmi 0x100a830a
  cmp.w r8,#0x2
  bne 0x100a830a
  lsls r2,r3,#0x1d
  bmi 0x100a830a
  ldr r0,[r4,#0x18]
  bl 0x1012d608
  ldrh r3,[r4,#0x10]
  cmp r0,r3
  blt 0x100a830a
  bl 0x1011dc4c
  cbnz r0,0x100a82a6
  bl 0x10114a38
  ldr r3,[r4,#0x28]
  cbz r3,0x100a82b0
  movs r0,#0x1
  ldr r1,[r4,#0x2c]
  blx r3
  ldrb r3,[r4,#0x9]
  ldr r0,[r4,#0x24]
  orr r3,r3,#0x2
  strb r3,[r4,#0x9]
  bl 0x10064624
  ldrd r1,r0,[r4,#0x14]
  ldrh r2,[r4,#0x10]
  bl 0x100a0654
  ldrb r3,[r4,#0x7]
  ldrh r2,[r4,#0x10]
  udiv r2,r2,r3
  mov r0,r2
  movs r3,#0x0
  asrs r1,r2,#0x1f
  strd r0,r1,[r4,#0x60]
  ldr r0,[r4,#0x58]
  str r3,[r4,#0x68]
  cbz r0,0x100a82f2
  ldrb r3,[r4,#0x9]
  and r3,r3,#0x60
  cmp r3,#0x20
  bne 0x100a82f2
  add.w r1,r4,#0x14
  bl 0x1012f50e
  ldrb r3,[r4,#0x5]
  ldr r0,[r4,#0x24]
  lsls r3,r3,#0x1c
  bpl.w 0x100a840c
  bl 0x100643d4
  bl 0x1011dc4c
  cbnz r0,0x100a830a
  bl 0x101150e0
  add sp,#0x24
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  ldrsh.w r11,[r1,r3,lsl #0x1]
  ldr.w r9,[r10,#-0x8]
  add.w r11,r11,r11, lsr #0x1f
  add.w r9,r9,r9, lsr #0x1f
  asr.w r11,r11, asr #0x1
  asr.w r9,r9, asr #0x1
  add.w r9,r9,r11, lsl #0x10
  str.w r9,[r10,#-0x8]
  ldrsh.w r11,[r12,r3,lsl #0x1]
  ldr.w r9,[r10,#-0x4]
  add.w r11,r11,r11, lsr #0x1f
  add.w r9,r9,r9, lsr #0x1f
  asr.w r11,r11, asr #0x1
  asr.w r9,r9, asr #0x1
  add.w r9,r9,r11, lsl #0x10
  str.w r9,[r10,#-0x4]
  adds r3,#0x1
  b 0x100a8220
  ldrsh.w r12,[r1,r3,lsl #0x1]
  add.w r12,r12,r12, lsr #0x1f
  asr.w r9,r12, asr #0x1
  ldr.w r12,[r5,r3,lsl #0x2]
  add.w r12,r12,r12, lsr #0x1f
  asr.w r12,r12, asr #0x1
  add.w r12,r12,r9, lsl #0x10
  str.w r12,[r5,r3,lsl #0x2]
  adds r3,#0x1
  cmp r3,r2
  blt 0x100a8354
  b 0x100a8228
  cmp.w r9,#0x1
  bls 0x100a83ec
  mov r10,r5
  cmp r3,r2
  add.w r10,r10,#0x4
  blt 0x100a8392
  add.w r5,r5,r2, lsl #0x2
  b 0x100a8228
  ldrsh.w r9,[r1,r3,lsl #0x1]
  ldrsh.w r11,[r10,#-0x4]
  add.w r9,r9,r9, lsr #0x1f
  add.w r11,r11,r11, lsr #0x1f
  asr.w r9,r9, asr #0x1
  add.w r9,r9,r11, asr #0x1
  strh r9,[r10,#-0x4]
  ldrsh.w r9,[r12,r3,lsl #0x1]
  ldrsh.w r11,[r10,#-0x2]
  add.w r9,r9,r9, lsr #0x1f
  add.w r11,r11,r11, lsr #0x1f
  asr.w r9,r9, asr #0x1
  add.w r9,r9,r11, asr #0x1
  strh r9,[r10,#-0x2]
  adds r3,#0x1
  b 0x100a8384
  ldrsh.w r12,[r5,r3,lsl #0x1]
  add.w r9,r12,r12, lsr #0x1f
  ldrsh.w r12,[r1,r3,lsl #0x1]
  add.w r12,r12,r12, lsr #0x1f
  asr.w r12,r12, asr #0x1
  add.w r12,r12,r9, asr #0x1
  strh.w r12,[r5,r3,lsl #0x1]
  adds r3,#0x1
  cmp r3,r2
  blt 0x100a83ce
  add.w r5,r5,r2, lsl #0x1
  b 0x100a8228
  movs r0,#0x2
  bl 0x1011dbc8
  b 0x100a81e4
  ldr r3,[r4,#0x38]
  cmp r3,#0x0
  bne.w 0x100a81e4
  strd r0,r0,[r4,#0x40]
  b 0x100a81e4
  ldrh r2,[r4,#0x10]
  ldr r1,[r4,#0x14]
  bl 0x10064404
  b 0x100a8300
