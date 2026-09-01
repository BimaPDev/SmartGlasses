; FUN_10105a8c @ 0x10105a8c size=118
  push {r4,r5,r6,r7,r8,lr}
  mov r4,r0
  ldrsh.w r0,[r0,#0x12e]
  mov r6,r1
  mov r5,r2
  mov r8,r3
  cbz r0,0x10105ab2
  ldr r2,[r4,#0x0]
  ldr r2,[r2,#0x60]
  ldr r2,[r2,#0x40]
  cmp r2,#0x23
  beq 0x10105ae6
  ldr r1,[r6,#0x18]
  ldrb r2,[r1,r5]
  orr r2,r2,#0x8
  strb r2,[r1,r5]
  ldrsh.w r1,[r4,#0x130]
  cbnz r1,0x10105abc
  pop.w {r4,r5,r6,r7,r8,pc}
  ldr r7,[r6,#0x10]
  ldr.w r2,[r4,#0x238]
  mov r0,r8
  add.w r7,r7,r5, lsl #0x3
  ldr r4,[r7,#0x4]
  bl 0x100f85ec
  ldr r3,[r6,#0x10]
  lsls r1,r5,#0x3
  ldr r2,[r6,#0x18]
  add r3,r1
  add r0,r4
  str r0,[r3,#0x4]
  ldrb r3,[r2,r5]
  orr r3,r3,#0x10
  strb r3,[r2,r5]
  pop.w {r4,r5,r6,r7,r8,pc}
  ldr r7,[r1,#0x10]
  ldr.w r2,[r4,#0x238]
  mov r1,r0
  mov r0,r3
  ldr.w r7,[r7,r5,lsl #0x3]
  bl 0x100f85ec
  ldr r2,[r6,#0x10]
  add r0,r7
  str.w r0,[r2,r5,lsl #0x3]
  b 0x10105aa8
