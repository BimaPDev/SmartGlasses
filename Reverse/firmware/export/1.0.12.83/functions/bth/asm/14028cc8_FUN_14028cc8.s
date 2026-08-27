; FUN_14028cc8 @ 0x14028cc8 size=178
  push {r3,r4,r5,r6,r7,lr}
  mov r7,lr
  mov r4,r0
  mov r5,r1
  mrs r6,basepri
  cmp r6,#0x40
  beq 0x14028cfe
  mov r12,pc
  ldr r0,[0x14028d7c]
  ldr r2,[0x14028d80]
  ldrb r1,[r0,#0x0]
  ldr r3,[0x14028d84]
  strd r12,lr,[r2,#0x0]
  adds r2,r1,#0x1
  umull r12,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r0,#0x0]
  ldr r3,[0x14028d88]
  str.w lr,[r3,r1,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  cbnz r4,0x14028d52
  ldr r3,[0x14028d8c]
  strb r4,[r3,#0x0]
  cbnz r6,0x14028d14
  mov.w r2,#0xffffffff
  ldr r3,[0x14028d80]
  str r2,[r3,#0x0]
  ldr r1,[0x14028d90]
  ldr r0,[0x14028d94]
  ldrb r2,[r1,#0x0]
  ldr r3,[0x14028d84]
  str.w r7,[r0,r2,lsl #0x2]
  adds r2,#0x1
  umull r0,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r1,#0x0]
  msr basepri,r6
  cbz r4,0x14028d4a
  cbz r5,0x14028d4a
  ldr r2,[0x14028d98]
  ldr r1,[0x14028d9c]
  ldr r3,[0x14028da0]
  ldr r2,[r2,#0x0]
  lsls r5,r5,#0x4
  str r5,[r1,#0x0]
  str r2,[r3,#0x0]
  pop {r3,r4,r5,r6,r7,pc}
  movs r2,#0x0
  ldr r3,[0x14028d9c]
  str r2,[r3,#0x0]
  pop {r3,r4,r5,r6,r7,pc}
  ldr r3,[0x14028da4]
  lsls r2,r4,#0x4
  str r2,[r3,#0x0]
  bl 0x140e5848
  movs r3,#0x0
  movs r2,#0x1
  ldr r1,[0x14028d98]
  str r0,[r1,#0x0]
  ldr r1,[0x14028da8]
  str r3,[r1,#0x0]
  ldr r1,[0x14028dac]
  str r3,[r1,#0x0]
  ldr r1,[0x14028db0]
  str r3,[r1,#0x0]
  ldr r1,[0x14028db4]
  strb r3,[r1,#0x0]
  ldr r3,[0x14028d8c]
  strb r2,[r3,#0x0]
  b 0x14028d0a
