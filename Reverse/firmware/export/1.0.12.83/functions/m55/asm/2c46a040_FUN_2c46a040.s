; FUN_2c46a040 @ 0x2c46a040 size=264
  push {r3,r4,r5,r6,r7,r8,r9,lr}
  ldr r4,[0x2c46a1cc]
  mov r6,r0
  ldr r3,[r4,#0x0]
  adds r3,#0x1
  beq 0x2c46a134
  mov r0,r6
  bl 0x2c66c4ec
  ldr r3,[r4,#0x0]
  ldr r2,[0x2c46a1d0]
  cmp r0,#0xc
  mov r5,r0
  add r2,r3
  add.w r8,r2,r0
  bls.w 0x2c46a1c4
  add.w r4,r6,#0xc
  mov r0,r8
  mov r7,r8
  ldrb.w r3,[r4,#-0x2]
  subs r5,#0xc
  ldrb.w r1,[r4,#-0x3]
  ldrb.w lr,[r4,#-0xa]
  lsls r3,r3,#0x10
  ldrb.w r2,[r4,#-0x4]
  cmp r5,#0xc
  ldrb.w r6,[r4,#-0xb]
  add.w r3,r3,r1, lsl #0x8
  lsl.w lr,lr,#0x10
  ldrb.w r1,[r4,#-0xc]
  ldrb.w r12,[r4,#-0x6]
  add r3,r2
  ldrb.w r9,[r4,#-0x1]
  add.w lr,lr,r6, lsl #0x8
  ldrb.w r2,[r4,#-0x9]
  lsl.w r12,r12,#0x10
  ldrb.w r6,[r4,#-0x7]
  add lr,r1
  add.w r3,r3,r9, lsl #0x18
  ldrb.w r1,[r4,#-0x8]
  add.w r12,r12,r6, lsl #0x8
  mov r6,r4
  add r3,r0
  add.w r2,lr,r2, lsl #0x18
  ldrb.w r0,[r4,#-0x5]
  add r1,r12
  sub.w r2,r2,r3
  add.w r4,r4,#0xc
  add.w r1,r1,r0, lsl #0x18
  add r2,r8
  add r1,r7
  eor.w r12,r2,r3, ror #0x1c
  add r3,r1
  sub.w r2,r1,r12
  add.w r0,r12,r3
  eor.w r2,r2,r12, ror #0x1a
  sub.w r3,r3,r2
  add.w r1,r2,r0
  eor.w r2,r3,r2, ror #0x18
  sub.w r0,r0,r2
  add.w r3,r2,r1
  eor.w r2,r0,r2, ror #0x10
  sub.w r1,r1,r2
  add.w r8,r2,r3
  eor.w r2,r1,r2, ror #0xd
  sub.w r3,r3,r2
  add.w r7,r2,r8
  eor.w r0,r3,r2, ror #0x1c
  bhi 0x2c46a06e
  subs r5,#0x1
  cmp r5,#0xb
  bhi 0x2c46a1c0
  tbb [pc,r5]
  bl 0x2c46be68
  adds r3,r0,#0x1
  beq 0x2c46a134
  ldrex r3,[r4,#0x0]
  adds r3,#0x1
  bne 0x2c46a14c
  dmb #0x1b
  b 0x2c46a04e
  pop.w {r3,r4,r5,r6,r7,r8,r9,pc}
  mov r0,r8
  mov r7,r8
  b 0x2c46a11e
