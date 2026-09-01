; FUN_10105bf8 @ 0x10105bf8 size=660
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  ldr.w r2,[r0,#0x134]
  ldr r3,[r0,#0x10]
  mov r4,r0
  cmp r3,r2
  sub sp,#0xc
  blt 0x10105c80
  ldrh.w r3,[r0,#0x15c]
  cmp r3,#0x0
  bne 0x10105c98
  ldrh.w r3,[r4,#0x122]
  ldrh r1,[r4,#0x2c]
  cmp r1,r3
  bls 0x10105c80
  ldrd r1,r6,[r4,#0x30]
  ldrh.w r0,[r4,#0x124]
  ldrh.w r5,[r4,#0x50]
  add.w r7,r1,r3, lsl #0x3
  cmp r5,r0
  add.w r6,r6,r3, lsl #0x3
  bls 0x10105d0c
  ldr r2,[r4,#0x54]
  ldr.w r1,[r1,r3,lsl #0x3]
  add.w r3,r2,r0, lsl #0x3
  ldr.w r0,[r2,r0,lsl #0x3]
  ldr r2,[r3,#0x4]
  ldr r3,[r7,#0x4]
  subs r1,r0,r1
  subs r2,r2,r3
  mov r0,r4
  ldr.w r3,[r4,#0x244]
  blx r3
  mov.w r8,#0x1
  str r0,[sp,#0x0]
  ldr r3,[r4,#0x58]
  ldrh.w r1,[r4,#0x124]
  ldr r2,[r6,#0x4]
  add.w r0,r3,r1, lsl #0x3
  ldr r0,[r0,#0x4]
  ldr.w r1,[r3,r1,lsl #0x3]
  ldr r3,[r6,#0x0]
  subs r2,r0,r2
  subs r1,r1,r3
  mov r0,r4
  ldr.w r3,[r4,#0x240]
  blx r3
  ldr.w r2,[r4,#0x134]
  str r0,[sp,#0x4]
  b 0x10105cd4
  ldrb.w r3,[r4,#0x235]
  cmp r3,#0x0
  bne 0x10105d04
  ldr r3,[r4,#0x1c]
  movs r2,#0x1
  str r3,[r4,#0x20]
  str.w r2,[r4,#0x134]
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  ldrh.w r3,[r0,#0x15e]
  cmp r3,#0x0
  beq 0x10105c12
  ldrh.w r3,[r0,#0x160]
  cmp r3,#0x0
  beq 0x10105c12
  ldrh.w r3,[r0,#0x122]
  ldrh r1,[r0,#0x2c]
  cmp r1,r3
  bls 0x10105c80
  ldrd r6,r1,[r0,#0x34]
  ldrh.w r5,[r0,#0x124]
  ldrh.w r12,[r0,#0x50]
  add.w r7,r1,r3, lsl #0x3
  cmp r12,r5
  add.w r6,r6,r3, lsl #0x3
  bhi.w 0x10105e06
  mov.w r8,#0x0
  strd r8,r8,[sp,#0x0]
  cmp r2,#0x0
  ldr r3,[r4,#0x1c]
  it gt
  add.gt.w r9,r4,#0x6c
  ble 0x10105c8a
  ldr r1,[r4,#0x18]
  subs r3,#0x1
  str r3,[r4,#0x1c]
  ldr.w r5,[r1,r3,lsl #0x2]
  ldrh.w r1,[r4,#0x74]
  cmp r1,r5
  bhi 0x10105d18
  ldrb.w r1,[r4,#0x235]
  cmp r1,#0x0
  beq 0x10105d80
  movs r3,#0x86
  str r3,[r4,#0xc]
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  movs r2,#0x86
  ldr r3,[r4,#0x1c]
  str r2,[r4,#0xc]
  b 0x10105c8a
  movs r3,#0x0
  mov.w r8,#0x1
  str r3,[sp,#0x4]
  str r3,[sp,#0x0]
  b 0x10105cd4
  cmp.w r8,#0x0
  beq 0x10105d8c
  ldr r3,[r4,#0x78]
  add.w r1,r3,r5, lsl #0x3
  ldr r0,[r1,#0x4]
  ldr r2,[r7,#0x4]
  ldr.w r1,[r3,r5,lsl #0x3]
  ldr r3,[r7,#0x0]
  subs r2,r0,r2
  subs r1,r1,r3
  mov r0,r4
  ldr.w r3,[r4,#0x244]
  blx r3
  mov r10,r0
  lsl.w r11,r5,#0x3
  ldr r3,[r4,#0x7c]
  ldr r2,[r6,#0x4]
  add.w r1,r3,r11
  ldr r0,[r1,#0x4]
  ldr.w r1,[r3,r11]
  ldr r3,[r6,#0x0]
  subs r2,r0,r2
  subs r1,r1,r3
  mov r0,r4
  ldr.w r3,[r4,#0x240]
  blx r3
  mov r11,r0
  cmp.w r10,#0x0
  beq 0x10105d6a
  ldr r3,[sp,#0x0]
  cmp r3,#0x0
  bne 0x10105df8
  uxth r2,r5
  sub.w r3,r10,r11
  mov r1,r9
  mov r0,r4
  ldr.w r5,[r4,#0x24c]
  blx r5
  ldr r3,[r4,#0x1c]
  ldr.w r2,[r4,#0x134]
  subs r2,#0x1
  cmp r2,#0x0
  str.w r2,[r4,#0x134]
  bgt 0x10105ce0
  b 0x10105c8a
  ldrd r3,r0,[r4,#0xe0]
  cmp r3,r0
  beq 0x10105df2
  ldr.w r2,[r4,#0x80]
  lsl.w r11,r5,#0x3
  ldr.w r1,[r2,r5,lsl #0x3]
  add.w r10,r2,r5, lsl #0x3
  ldr r2,[r7,#0x0]
  subs r1,r1,r2
  smull r12,lr,r3,r1
  asr.w r1,lr, asr #0x1f
  add.w r1,r1,#0x8000
  adds.w r12,r12,r1
  adc lr,lr,#0x0
  lsr.w r1,r12,#0x10
  orr.w r1,r1,lr, lsl #0x10
  ldr.w r2,[r10,#0x4]
  ldr r3,[r7,#0x4]
  subs r2,r2,r3
  smull r3,r12,r0,r2
  asr.w r2,r12, asr #0x1f
  add.w r2,r2,#0x8000
  adds r3,r3,r2
  adc r12,r12,#0x0
  lsr.w r2,r3,#0x10
  orr.w r2,r2,r12, lsl #0x10
  mov r0,r4
  ldr.w r3,[r4,#0x244]
  blx r3
  mov r10,r0
  b 0x10105d40
  ldr.w r3,[r4,#0x80]
  b 0x10105d20
  mov r0,r10
  mov r2,r3
  ldr r1,[sp,#0x4]
  bl 0x100f85ec
  mov r10,r0
  b 0x10105d6a
  ldrd r2,r12,[r0,#0xe0]
  cmp r2,r12
  beq 0x10105e68
  ldr.w lr,[r0,#0x5c]
  ldr.w r3,[r1,r3,lsl #0x3]
  ldr.w r1,[lr,r5,lsl #0x3]
  add.w r5,lr,r5, lsl #0x3
  subs r1,r1,r3
  smull r3,lr,r2,r1
  asr.w r1,lr, asr #0x1f
  add.w r1,r1,#0x8000
  adds r3,r3,r1
  adc lr,lr,#0x0
  lsr.w r1,r3,#0x10
  orr.w r1,r1,lr, lsl #0x10
  ldr r2,[r5,#0x4]
  ldr r3,[r7,#0x4]
  subs r2,r2,r3
  smull r3,r5,r12,r2
  asr.w r2,r5, asr #0x1f
  add.w r2,r2,#0x8000
  adds r3,r3,r2
  adc r5,r5,#0x0
  lsr.w r2,r3,#0x10
  orr.w r2,r2,r5, lsl #0x10
  ldr.w r3,[r0,#0x244]
  blx r3
  mov.w r8,#0x0
  str r0,[sp,#0x0]
  b 0x10105c58
  ldr r2,[r0,#0x5c]
  ldr.w r1,[r1,r3,lsl #0x3]
  add.w r3,r2,r5, lsl #0x3
  ldr.w r5,[r2,r5,lsl #0x3]
  ldr r2,[r3,#0x4]
  ldr r3,[r7,#0x4]
  subs r1,r5,r1
  subs r2,r2,r3
  ldr.w r3,[r0,#0x244]
  blx r3
  mov.w r8,#0x0
  str r0,[sp,#0x0]
  b 0x10105c58
