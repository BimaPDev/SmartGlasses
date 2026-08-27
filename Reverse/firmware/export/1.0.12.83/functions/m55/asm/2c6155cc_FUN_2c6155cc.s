; FUN_2c6155cc @ 0x2c6155cc size=358
  push {r3,r4,r5,r6,r7,lr}
  mov r5,r0
  mov.w r1,#0xc000
  ldr r0,[r0,#0x24]
  bl 0x2c635ec0
  ldrsb.w r3,[r5,#0x2e]
  ldrh r0,[r5,#0x2c]
  cmp r3,#0x2
  ldr r4,[0x2c6156ac]
  ldr r6,[0x2c6156b0]
  itete ls
  mov.ls r2,#0xc
  mov.hi r2,#0x0
  mov.ls r1,#0x1
  mov.hi r1,#0x0
  add r2,r3
  subs r1,r0,r1
  rsb r2,r2,r2, lsl #0x5
  sub.w r3,r2,#0x3e
  umull r3,r2,r4,r3
  adds r3,r1,#0x1
  ldr r4,[0x2c6156b4]
  add.w r3,r3,r1, lsr #0x2
  umull r4,r1,r4,r1
  add.w r3,r3,r1, lsr #0x7
  add.w r3,r3,r2, lsr #0x3
  sub.w r3,r3,r1, lsr #0x5
  umull r2,r6,r6,r3
  ldr r2,[r5,#0x30]
  subs r1,r3,r6
  add.w r6,r6,r1, lsr #0x1
  lsrs r6,r6,#0x2
  rsb r6,r6,r6, lsl #0x3
  subs r6,r3,r6
  cbz r2,0x2c615680
  ldrh.w r12,[r5,#0x34]
  cmp.w r12,#0x0
  beq 0x2c615680
  movs r4,#0x0
  adds r7,r6,#0x6
  b 0x2c615648
  uxth r3,r4
  cmp r12,r3
  bls 0x2c615680
  ldr r2,[r5,#0x30]
  ldrh r0,[r5,#0x2c]
  uxth r3,r4
  adds r4,#0x1
  ldrh.w r1,[r2,r3,lsl #0x2]
  add.w r3,r2,r3, lsl #0x2
  cmp r1,r0
  bne 0x2c61563e
  ldrsb.w r1,[r3,#0x2]
  ldrsb.w r2,[r5,#0x2e]
  cmp r1,r2
  bne 0x2c61563e
  ldrsb.w r1,[r3,#0x3]
  mov.w r2,#0x8000
  ldr r0,[r5,#0x24]
  add r1,r7
  uxth r1,r1
  bl 0x2c635e10
  ldrh.w r12,[r5,#0x34]
  uxth r3,r4
  cmp r12,r3
  bhi 0x2c615644
  ldrd r3,r2,[r5,#0x28]
  bic r2,r2,#0xff000000
  bic r3,r3,#0xff000000
  cmp r2,r3
  beq 0x2c615692
  pop {r3,r4,r5,r6,r7,pc}
  ldrsb.w r1,[r5,#0x2b]
  mov.w r2,#0x4000
  ldr r0,[r5,#0x24]
  adds r1,#0x6
  add r1,r6
  pop.w {r3,r4,r5,r6,r7,lr}
  uxth r1,r1
  b.w 0x2c635e10
  push {r4,r5,r6,r7,r8,lr}
  ldrb.w r3,[r0,#0x36]
  mov r5,r1
  mov r4,r0
  mov r7,r2
  lsls r1,r3,#0x1f
  bpl 0x2c6356ae
  lsls r2,r7,#0x18
  bmi 0x2c6356e6
  ldr r2,[r4,#0x2c]
  ldrh.w r3,[r2,r5,lsl #0x1]
  orrs r3,r7
  strh.w r3,[r2,r5,lsl #0x1]
  movw r3,#0xffff
  cmp r5,r3
  beq 0x2c6356c8
  ldrh r3,[r4,#0x30]
  cmp r3,r5
  bhi 0x2c6356d0
  lsls r3,r7,#0x16
  bmi 0x2c6356dc
  pop.w {r4,r5,r6,r7,r8,pc}
  mov r1,r5
  mov r0,r4
  bl 0x2c6352cc
  lsls r3,r7,#0x16
  bpl 0x2c6356cc
  mov r0,r4
  pop.w {r4,r5,r6,r7,r8,lr}
  b.w 0x2c600bac
  ldrh r3,[r0,#0x30]
  cmp r3,#0x0
  beq 0x2c6356ae
  movs r6,#0x0
  movw r8,#0xffff
  mov r1,r6
  uxth r3,r6
  ldr r0,[r4,#0x2c]
  cmp r1,r8
  ldrh.w r2,[r0,r3,lsl #0x1]
  bic r2,r2,#0x80
  strh.w r2,[r0,r3,lsl #0x1]
  ldrh r3,[r4,#0x30]
  beq 0x2c635716
  cmp r3,r1
  mov r0,r4
  bls 0x2c635716
  bl 0x2c6352cc
  ldrh r3,[r4,#0x30]
  adds r6,#0x1
  uxth r1,r6
  cmp r1,r3
  bcc 0x2c6356f4
  b 0x2c6356ae
