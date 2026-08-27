; FUN_14027e3c @ 0x14027e3c size=136
  mov r1,lr
  push {r4,r5,lr}
  mrs r4,basepri
  cmp r4,#0x40
  beq 0x14027e74
  mov r2,pc
  ldr r5,[0x14027ec4]
  ldr r3,[0x14027ec8]
  ldrb.w r12,[r5,#0x0]
  str r2,[r3,#0x0]
  str.w lr,[r3,#0x4]
  ldr r3,[0x14027ecc]
  add.w r2,r12,#0x1
  umull lr,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r5,#0x0]
  ldr r3,[0x14027ed0]
  str.w r1,[r3,r12,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  ldr r3,[0x14027ed4]
  ldr r2,[0x14027ed8]
  str.w r2,[r3,#0xc00]
  ldr r2,[0x14027edc]
  ldr.w r0,[r2,r0,lsl #0x2]
  movs r2,#0x1
  str r0,[r3,#0x0]
  str.w r2,[r3,#0xc00]
  cbnz r4,0x14027e9a
  mov.w r2,#0xffffffff
  ldr r3,[0x14027ec8]
  str r2,[r3,#0x0]
  ldr r0,[0x14027ee0]
  ldr r3,[0x14027ee4]
  ldrb r2,[r0,#0x0]
  str.w r1,[r3,r2,lsl #0x2]
  ldr r3,[0x14027ecc]
  adds r2,#0x1
  umull r1,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r0,#0x0]
  msr basepri,r4
  ldr r3,[0x14027ed4]
  ldr.w r3,[r3,#0xc00]
  pop {r4,r5,pc}
