; FUN_2c4f959c @ 0x2c4f959c size=228
  push {r4,r5,r6,r7,r8,r9,r10,lr}
  ldr r3,[r0,#0x1c]
  rsb.w r8,r2,#0x20
  ldr.w lr,[r0,#0x10]
  add.w r12,r3,#0xffffffff
  ldr r3,[r0,#0xc]
  ldr r4,[r0,#0x18]
  and r6,lr,#0x7
  add r3,r2
  ldr r7,[0x2c4f9680]
  subs r4,#0x1
  ldr.w r10,[r0,#0x14]
  str r3,[r0,#0xc]
  lsr.w r5,lr,#0x3
  ldr r3,[r0,#0x0]
  add r3,r2
  str r3,[r0,#0x0]
  add.w r3,lr,r2
  and.w lr,r4,lr, lsr #0x3
  and.w r3,r12,r3
  ldr.w r12,[r7,r8,lsl #0x2]
  str r3,[r0,#0x10]
  rsb.w r3,r6,#0x20
  lsr.w r12,r12,r6
  ldr.w r9,[r7,r3,lsl #0x2]
  lsl.w r3,r1,r8
  add.w r8,r5,#0x1
  orn.w r12,r12,r9
  ldrb.w r9,[r10,lr]
  lsrs r3,r6
  and.w r8,r8,r4
  and.w r9,r9,r12, lsr #0x18
  orr.w r9,r9,r3, lsr #0x18
  strb.w r9,[r10,lr]
  add.w r9,r5,#0x2
  ldr.w r10,[r0,#0x14]
  and.w r9,r9,r4
  ldrb.w lr,[r10,r8]
  and.w lr,lr,r12, lsr #0x10
  orr.w lr,lr,r3, lsr #0x10
  strb.w lr,[r10,r8]
  add.w r8,r5,#0x3
  ldr.w r10,[r0,#0x14]
  and.w r8,r8,r4
  ldrb.w lr,[r10,r9]
  and.w lr,lr,r12, lsr #0x8
  orr.w lr,lr,r3, lsr #0x8
  strb.w lr,[r10,r9]
  ldr.w r9,[r0,#0x14]
  ldrb.w lr,[r9,r8]
  and.w r12,lr,r12
  orr.w r3,r12,r3
  strb.w r3,[r9,r8]
  cbz r6,0x2c4f967c
  cmp r2,#0x18
  bls 0x2c4f967c
  rsb.w r2,r2,#0x28
  adds r5,#0x4
  ldr r0,[r0,#0x14]
  lsls r1,r2
  ands r4,r5
  subs r2,r2,r6
  lsr.w r6,r1,r6
  ldrb r1,[r0,r4]
  ldr.w r3,[r7,r2,lsl #0x2]
  ands r1,r3
  orrs r6,r1
  strb r6,[r0,r4]
  pop.w {r4,r5,r6,r7,r8,r9,r10,pc}
