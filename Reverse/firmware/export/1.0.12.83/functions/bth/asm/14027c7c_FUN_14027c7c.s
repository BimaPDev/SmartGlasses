; FUN_14027c7c @ 0x14027c7c size=122
  push {r4,r5,lr}
  mov r4,lr
  mrs r1,basepri
  cmp r1,#0x40
  beq 0x14027cb4
  mov r2,pc
  ldr r5,[0x14027cf8]
  ldr r3,[0x14027cfc]
  ldrb.w r12,[r5,#0x0]
  str r2,[r3,#0x0]
  str.w lr,[r3,#0x4]
  ldr r3,[0x14027d00]
  add.w r2,r12,#0x1
  umull lr,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r5,#0x0]
  ldr r3,[0x14027d04]
  str.w r4,[r3,r12,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  ldr r2,[0x14027d08]
  ldr r3,[r2,#0x38]
  bic.w r0,r3,r0
  bic r0,r0,#0xf
  str r0,[r2,#0x38]
  cbnz r1,0x14027cd2
  mov.w r2,#0xffffffff
  ldr r3,[0x14027cfc]
  str r2,[r3,#0x0]
  ldr r0,[0x14027d0c]
  ldr r3,[0x14027d10]
  ldrb r2,[r0,#0x0]
  str.w r4,[r3,r2,lsl #0x2]
  ldr r3,[0x14027d00]
  adds r2,#0x1
  umull r4,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r0,#0x0]
  msr basepri,r1
  pop {r4,r5,pc}
