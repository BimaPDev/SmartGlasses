; FUN_14027be8 @ 0x14027be8 size=120
  push {r4,r5,lr}
  mov r4,lr
  mrs r1,basepri
  cmp r1,#0x40
  beq 0x14027c20
  mov r2,pc
  ldr r5,[0x14027c60]
  ldr r3,[0x14027c64]
  ldrb.w r12,[r5,#0x0]
  str r2,[r3,#0x0]
  str.w lr,[r3,#0x4]
  ldr r3,[0x14027c68]
  add.w r2,r12,#0x1
  umull lr,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r5,#0x0]
  ldr r3,[0x14027c6c]
  str.w r4,[r3,r12,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  ldr r2,[0x14027c70]
  ldr r3,[r2,#0x38]
  orrs r0,r3
  bic r0,r0,#0xf
  str r0,[r2,#0x38]
  cbnz r1,0x14027c3c
  mov.w r2,#0xffffffff
  ldr r3,[0x14027c64]
  str r2,[r3,#0x0]
  ldr r0,[0x14027c74]
  ldr r3,[0x14027c78]
  ldrb r2,[r0,#0x0]
  str.w r4,[r3,r2,lsl #0x2]
  ldr r3,[0x14027c68]
  adds r2,#0x1
  umull r4,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r0,#0x0]
  msr basepri,r1
  pop {r4,r5,pc}
