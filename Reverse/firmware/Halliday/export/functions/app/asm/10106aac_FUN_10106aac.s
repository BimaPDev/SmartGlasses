; FUN_10106aac @ 0x10106aac size=494
  push {r3,r4,r5,r6,r7,r8,r9,lr}
  ldrh.w r3,[r0,#0x50]
  uxth r6,r1
  cmp r3,r6
  mov r4,r0
  ldrh.w r5,[r0,#0x120]
  bls 0x10106baa
  ldrh r3,[r0,#0x2c]
  cmp r3,r5
  bls 0x10106baa
  ldrh.w r3,[r0,#0x15c]
  cbz r3,0x10106ad6
  ldrh.w r3,[r0,#0x15e]
  cmp r3,#0x0
  bne.w 0x10106bde
  ldr r0,[r4,#0x30]
  ldr r7,[r4,#0x54]
  uxth r3,r1
  add.w r1,r7,r3, lsl #0x3
  add.w r2,r0,r5, lsl #0x3
  ldr.w r12,[r1,#0x4]
  ldr.w r7,[r7,r3,lsl #0x3]
  ldr.w r1,[r0,r5,lsl #0x3]
  ldr r2,[r2,#0x4]
  ldr.w r5,[r4,#0x244]
  mov r0,r4
  sub.w r2,r12,r2
  subs r1,r7,r1
  lsl.w r8,r3,#0x3
  blx r5
  mov r5,r0
  ldr.w r2,[r4,#0x148]
  cmp r2,#0x0
  ble 0x10106b26
  ldr.w r3,[r4,#0x14c]
  adds r1,r2,r3
  cmp r1,r5
  ble 0x10106b26
  subs r2,r3,r2
  cmp r5,r2
  ble 0x10106b26
  cmp r5,#0x0
  ite ge
  mov.ge r5,r3
  rsb.lt r5,r3
  ldrb.w r2,[r4,#0x174]
  lsls r7,r2,#0x1d
  bpl 0x10106bb8
  and r2,r2,#0x3
  mov r1,r5
  mov r0,r4
  ldr.w r3,[r4,#0x23c]
  blx r3
  ldrb.w r2,[r4,#0x174]
  mov r7,r0
  lsls r0,r2,#0x1c
  bpl 0x10106b56
  cmp r5,#0x0
  ldr.w r3,[r4,#0x138]
  bge 0x10106bd6
  rsbs r3,r3
  cmp r7,r3
  it ge
  mov.ge r7,r3
  ldrh.w r0,[r4,#0x120]
  ldr r1,[r4,#0x58]
  ldr r3,[r4,#0x34]
  add.w r5,r1,r8
  add.w r2,r3,r0, lsl #0x3
  ldr r5,[r5,#0x4]
  ldr.w r3,[r3,r0,lsl #0x3]
  ldr.w r1,[r1,r8]
  ldr r2,[r2,#0x4]
  subs r1,r1,r3
  subs r2,r5,r2
  ldr.w r3,[r4,#0x240]
  mov r0,r4
  blx r3
  ldr.w r5,[r4,#0x24c]
  subs r3,r7,r0
  mov r2,r6
  mov r0,r4
  add.w r1,r4,#0x48
  blx r5
  ldrh.w r5,[r4,#0x120]
  ldrb.w r3,[r4,#0x174]
  strh.w r5,[r4,#0x122]
  lsls r3,r3,#0x1b
  strh.w r6,[r4,#0x124]
  bpl 0x10106ba6
  strh.w r6,[r4,#0x120]
  pop.w {r3,r4,r5,r6,r7,r8,r9,pc}
  ldrb.w r3,[r4,#0x235]
  cmp r3,#0x0
  beq 0x10106b92
  movs r3,#0x86
  str r3,[r4,#0xc]
  b 0x10106b92
  and r3,r2,#0x3
  add.w r3,r4,r3, lsl #0x2
  cmp r5,#0x0
  ldr.w r7,[r3,#0x10c]
  blt 0x10106c4c
  add r7,r5
  lsls r1,r2,#0x1c
  bic.w r7,r7,r7, asr #0x1f
  bpl 0x10106b56
  ldr.w r3,[r4,#0x138]
  cmp r7,r3
  it lt
  mov.lt r7,r3
  b 0x10106b56
  ldr.w r9,[r0,#0x5c]
  ldr r7,[r0,#0x38]
  uxth r1,r1
  ldrd r2,r3,[r0,#0xe0]
  cmp r2,r3
  lsl.w r8,r1,#0x3
  add.w lr,r9,r1, lsl #0x3
  add.w r12,r7,r5, lsl #0x3
  beq 0x10106c5e
  ldr.w r1,[r9,r1,lsl #0x3]
  ldr.w r5,[r7,r5,lsl #0x3]
  subs r1,r1,r5
  smull r5,r7,r2,r1
  asr.w r1,r7, asr #0x1f
  add.w r1,r1,#0x8000
  adds r5,r5,r1
  adc r7,r7,#0x0
  lsr.w r1,r5,#0x10
  orr.w r1,r1,r7, lsl #0x10
  ldr.w r2,[lr,#0x4]
  ldr.w r5,[r12,#0x4]
  subs r2,r2,r5
  smull r5,r7,r3,r2
  asr.w r2,r7, asr #0x1f
  add.w r2,r2,#0x8000
  adds r5,r5,r2
  adc r7,r7,#0x0
  lsr.w r2,r5,#0x10
  orr.w r2,r2,r7, lsl #0x10
  ldr.w r3,[r0,#0x244]
  blx r3
  mov r5,r0
  b 0x10106b06
  subs r7,r5,r7
  lsls r2,r2,#0x1c
  and.w r7,r7,r7, asr #0x1f
  bpl.w 0x10106b56
  ldr.w r3,[r4,#0x138]
  b 0x10106b4e
  ldr.w r3,[r7,r5,lsl #0x3]
  ldr.w lr,[lr,#0x4]
  ldr.w r2,[r12,#0x4]
  ldr.w r1,[r9,r1,lsl #0x3]
  sub.w r2,lr,r2
  subs r1,r1,r3
  ldr.w r3,[r0,#0x244]
  blx r3
  ldr.w r5,[r4,#0xe0]
  smull r3,r2,r5,r0
  asr.w r5,r2, asr #0x1f
  add.w r5,r5,#0x8000
  adds r3,r3,r5
  adc r2,r2,#0x0
  lsr.w r5,r3,#0x10
  orr.w r5,r5,r2, lsl #0x10
  b 0x10106b06
