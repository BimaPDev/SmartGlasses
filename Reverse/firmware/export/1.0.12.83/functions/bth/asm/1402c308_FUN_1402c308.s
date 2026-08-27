; FUN_1402c308 @ 0x1402c308 size=260
  push {r4,r5,r6,r7,r8,lr}
  mov r1,lr
  mov r5,r0
  mov r4,r2
  mrs r2,basepri
  cmp r2,#0x40
  beq 0x1402c340
  mov r12,pc
  ldr r7,[0x1402c40c]
  ldr r0,[0x1402c410]
  ldrb r6,[r7,#0x0]
  ldr r3,[0x1402c414]
  strd r12,lr,[r0,#0x0]
  adds r0,r6,#0x1
  umull r12,r3,r3,r0
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r0,r3, lsl #0x1
  strb r3,[r7,#0x0]
  ldr r3,[0x1402c418]
  str.w lr,[r3,r6,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  ldr r3,[0x1402c41c]
  ldrb r0,[r3,#0x0]
  cmp r0,r5
  beq 0x1402c406
  ldrb r0,[r3,#0x1]
  cmp r0,r5
  it ne
  mov.ne r6,#0x2
  beq 0x1402c3f4
  cbnz r2,0x1402c362
  mov.w r0,#0xffffffff
  ldr r3,[0x1402c410]
  str r0,[r3,#0x0]
  ldr r0,[0x1402c420]
  ldr r7,[0x1402c424]
  ldrb.w r12,[r0,#0x0]
  ldr r3,[0x1402c414]
  str.w r1,[r7,r12,lsl #0x2]
  add.w r12,r12,#0x1
  umull r1,r3,r3,r12
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r12,r3, lsl #0x1
  strb r3,[r0,#0x0]
  msr basepri,r2
  cmp r6,#0x2
  beq 0x1402c3b2
  ldr.w r8,[0x1402c430]
  ldrb.w r3,[r8,r6]
  cbz r3,0x1402c3b6
  ldr r2,[0x1402c428]
  ldr.w r7,[r2,r6,lsl #0x2]
  cbz r7,0x1402c3b2
  movs r5,#0x0
  cmp r3,#0x1
  beq 0x1402c3ea
  mov r1,r4
  mov r0,r5
  mov r3,r7
  pop.w {r4,r5,r6,r7,r8,lr}
  movs r2,#0x0
  bx r3
  pop.w {r4,r5,r6,r7,r8,pc}
  mov r0,r5
  bl 0x14028a70
  mov r3,r0
  mov r0,r5
  mov r5,r3
  bl 0x14028888
  ldr r3,[0x1402c428]
  ldr.w r7,[r3,r6,lsl #0x2]
  cmp r7,#0x0
  beq 0x1402c3b2
  ldrb.w r3,[r8,r6]
  cmp r3,#0x0
  bne 0x1402c3a0
  ldr r2,[0x1402c42c]
  ldr.w r2,[r2,r6,lsl #0x2]
  cmp r2,r5
  bls 0x1402c3e6
  subs r5,r2,r5
  b 0x1402c3a4
  mov r5,r3
  b 0x1402c3a4
  ldr r3,[0x1402c42c]
  ldr.w r5,[r3,r6,lsl #0x2]
  lsrs r5,r5,#0x1
  b 0x1402c3a4
  movs r6,#0x1
  mov r0,r6
  ldr r7,[0x1402c430]
  ldrb r7,[r7,r0]
  cmp r7,#0x0
  bne 0x1402c358
  movs r7,#0xff
  strb r7,[r3,r0]
  b 0x1402c358
  movs r6,#0x0
  mov r0,r6
  b 0x1402c3f8
