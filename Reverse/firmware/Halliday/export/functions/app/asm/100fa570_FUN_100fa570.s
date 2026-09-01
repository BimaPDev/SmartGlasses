; FUN_100fa570 @ 0x100fa570 size=178
  cmp r0,#0x0
  beq 0x100fa620
  cmp r1,#0x0
  beq 0x100fa620
  push {r4,r5,r6,r7,lr}
  ldr r4,[r0,#0x4]
  cmp r4,#0x0
  beq 0x100fa616
  ldrsh.w r7,[r0,#0x2]
  add.w r7,r4,r7, lsl #0x3
  cmp r4,r7
  bcs 0x100fa616
  cmp r4,#0x0
  beq 0x100fa618
  ldr r3,[r4,#0x0]
  ldr r0,[r1,#0x0]
  smull r2,r5,r0,r3
  asr.w r0,r5, asr #0x1f
  add.w r0,r0,#0x8000
  adds r2,r2,r0
  adc r5,r5,#0x0
  lsr.w r0,r2,#0x10
  orr.w r0,r0,r5, lsl #0x10
  ldr r2,[r4,#0x4]
  ldr r5,[r1,#0x4]
  smull r6,r12,r5,r2
  asr.w r5,r12, asr #0x1f
  add.w r5,r5,#0x8000
  adds r6,r6,r5
  adc r12,r12,#0x0
  lsr.w r5,r6,#0x10
  orr.w r5,r5,r12, lsl #0x10
  ldr r6,[r1,#0x8]
  smull r12,lr,r6,r3
  asr.w r3,lr, asr #0x1f
  add.w r3,r3,#0x8000
  adds.w r12,r12,r3
  adc lr,lr,#0x0
  lsr.w r3,r12,#0x10
  orr.w r3,r3,lr, lsl #0x10
  ldr r6,[r1,#0xc]
  smull r12,lr,r6,r2
  asr.w r2,lr, asr #0x1f
  add.w r2,r2,#0x8000
  adds.w r12,r12,r2
  adc lr,lr,#0x0
  lsr.w r2,r12,#0x10
  orr.w r2,r2,lr, lsl #0x10
  add r0,r5
  add r3,r2
  strd r0,r3,[r4,#0x0]
  adds r4,#0x8
  cmp r4,r7
  bcc 0x100fa58c
  pop {r4,r5,r6,r7,pc}
  cmp r7,#0x8
  bls 0x100fa616
  movs r4,#0x8
  b 0x100fa590
  bx lr
