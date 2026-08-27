; FUN_14028e48 @ 0x14028e48 size=132
  cmp r0,#0x1f
  bhi 0x14028ec8
  push {r4,r5,lr}
  mov r4,lr
  mrs r1,basepri
  cmp r1,#0x40
  beq 0x14028e84
  mov r2,pc
  ldr r5,[0x14028ecc]
  ldr r3,[0x14028ed0]
  ldrb.w r12,[r5,#0x0]
  str r2,[r3,#0x0]
  str.w lr,[r3,#0x4]
  ldr r3,[0x14028ed4]
  add.w r2,r12,#0x1
  umull lr,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r5,#0x0]
  ldr r3,[0x14028ed8]
  str.w r4,[r3,r12,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  movs r3,#0x1
  ldr r2,[0x14028edc]
  lsl.w r0,r3,r0
  ldr r3,[r2,#0x0]
  orrs r0,r3
  str r0,[r2,#0x0]
  cbnz r1,0x14028ea2
  mov.w r2,#0xffffffff
  ldr r3,[0x14028ed0]
  str r2,[r3,#0x0]
  ldr r0,[0x14028ee0]
  ldr r3,[0x14028ee4]
  ldrb r2,[r0,#0x0]
  str.w r4,[r3,r2,lsl #0x2]
  ldr r3,[0x14028ed4]
  adds r2,#0x1
  umull r4,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r0,#0x0]
  msr basepri,r1
  movs r0,#0x0
  pop {r4,r5,pc}
  movs r0,#0x1
  bx lr
