; FUN_14026af8 @ 0x14026af8 size=308
  cmp r0,#0x1
  bhi 0x14026bdc
  cmp r1,#0x1
  bhi 0x14026be0
  push {r3,r4,r5,r6,r7,r8,r9,lr}
  ldr r5,[0x14026c2c]
  ldrb r5,[r5,r0]
  asrs r5,r1
  lsls r4,r5,#0x1f
  bpl 0x14026bf2
  ldr r5,[0x14026c30]
  rsb r6,r0,r0, lsl #0x4
  mov r4,lr
  add.w r5,r5,r6, lsl #0x2
  mrs r6,basepri
  cmp r6,#0x40
  beq 0x14026b54
  mov lr,pc
  ldr.w r9,[0x14026c58]
  ldr.w r12,[0x14026c4c]
  ldrb.w r8,[r9,#0x0]
  ldr r7,[0x14026c34]
  strd lr,r4,[r12,#0x0]
  add.w lr,r8,#0x1
  umull r7,r12,r7,lr
  lsr.w r12,r12,#0x3
  ldr r7,[0x14026c38]
  add.w r12,r12,r12, lsl #0x2
  sub.w r12,lr,r12, lsl #0x1
  strb.w r12,[r9,#0x0]
  str.w r4,[r7,r8,lsl #0x2]
  movs r7,#0x40
  msr basepri,r7
  ldrb r7,[r5,#0x10]
  cmp r7,#0x0
  bne 0x14026be4
  strd r3,r2,[r5,#0x8]
  movs r2,#0x1
  strb r2,[r5,#0x10]
  movs r2,#0x0
  ldr r3,[0x14026c3c]
  str r2,[r5,#0x0]
  ldr.w r2,[r3,r0,lsl #0x2]
  strb r1,[r5,#0x4]
  cmp r2,#0x0
  beq 0x14026c00
  ldr r2,[0x14026c40]
  ldr.w r3,[r2,r0,lsl #0x2]
  cmp r3,#0x0
  beq 0x14026bfa
  mov r2,r3
  ldr r3,[r3,#0x0]
  cmp r3,#0x0
  bne 0x14026b82
  str r5,[r2,#0x0]
  ldr r3,[0x14026c44]
  ldrb r2,[r3,r0]
  cbnz r2,0x14026bf6
  mov.w r8,#0x1
  ldr r7,[0x14026c48]
  strb.w r8,[r3,r0]
  ldrb r5,[r7,#0x0]
  cbnz r5,0x14026bf6
  mov r0,r5
  bl 0x14028ee8
  mov r0,r5
  strb.w r8,[r7,#0x0]
  cbnz r6,0x14026bb6
  mov.w r2,#0xffffffff
  ldr r3,[0x14026c4c]
  str r2,[r3,#0x0]
  ldr r5,[0x14026c50]
  ldr r3,[0x14026c34]
  ldrb r1,[r5,#0x0]
  adds r2,r1,#0x1
  umull r7,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r5,#0x0]
  ldr r3,[0x14026c54]
  str.w r4,[r3,r1,lsl #0x2]
  msr basepri,r6
  pop.w {r3,r4,r5,r6,r7,r8,r9,pc}
  movs r0,#0x1
  bx lr
  movs r0,#0x2
  bx lr
  ldrb.w r7,[r5,#0x24]
  add.w r12,r5,#0x14
  cbnz r7,0x14026c1c
  mov r5,r12
  b 0x14026b60
  movs r0,#0x3
  b 0x14026bd8
  movs r0,#0x0
  b 0x14026bac
  str.w r5,[r2,r0,lsl #0x2]
  b 0x14026b8c
  cmp r0,#0x0
  str.w r5,[r3,r0,lsl #0x2]
  it eq
  mov.eq r2,#0x4
  mov.w r3,#0x40000000
  it ne
  mov.ne r2,#0x8
  str.w r2,[r3,#0xa0]
  ldr.w r3,[r3,#0xa0]
  b 0x14026b8c
  ldrb.w r7,[r5,#0x38]
  adds r5,#0x28
  cmp r7,#0x0
  beq 0x14026b60
  mov.w r0,#0xffffffff
  b 0x14026bac
