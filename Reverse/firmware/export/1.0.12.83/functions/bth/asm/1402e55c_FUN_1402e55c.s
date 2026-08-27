; FUN_1402e55c @ 0x1402e55c size=128
  mov r1,lr
  push {r4,r5,lr}
  mrs r0,basepri
  cmp r0,#0x40
  beq 0x1402e590
  mov r2,pc
  ldr r5,[0x1402e5dc]
  ldr r3,[0x1402e5e0]
  ldrb r4,[r5,#0x0]
  str r2,[r3,#0x0]
  str.w lr,[r3,#0x4]
  ldr r3,[0x1402e5e4]
  adds r2,r4,#0x1
  umull r12,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r5,#0x0]
  ldr r3,[0x1402e5e8]
  str.w lr,[r3,r4,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  mov.w r2,#0x80000
  ldr r3,[0x1402e5ec]
  str r2,[r3,#0x4]
  ldr.w r2,[r3,#0x158]
  orr r2,r2,#0x10
  str.w r2,[r3,#0x158]
  cbnz r0,0x1402e5b4
  mov.w r2,#0xffffffff
  ldr r3,[0x1402e5e0]
  str r2,[r3,#0x0]
  ldr r4,[0x1402e5f0]
  ldr r3,[0x1402e5f4]
  ldrb r2,[r4,#0x0]
  str.w r1,[r3,r2,lsl #0x2]
  ldr r3,[0x1402e5e4]
  adds r2,#0x1
  umull r1,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r4,#0x0]
  msr basepri,r0
  ldr r3,[0x1402e5ec]
  ldr r3,[r3,#0x0]
  pop {r4,r5,pc}
