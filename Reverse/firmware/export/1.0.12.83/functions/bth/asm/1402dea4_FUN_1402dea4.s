; FUN_1402dea4 @ 0x1402dea4 size=128
  cmp r0,#0x0
  push {r4,r5,lr}
  mov r0,lr
  ite ne
  mov.ne r4,#0x4
  mov.eq r4,#0x0
  mrs r1,basepri
  cmp r1,#0x40
  beq 0x1402dee2
  mov r2,pc
  ldr r3,[0x1402df24]
  ldr r5,[0x1402df28]
  str r2,[r3,#0x0]
  str.w lr,[r3,#0x4]
  ldrb r3,[r5,#0x0]
  ldr r2,[0x1402df2c]
  add.w r12,r3,#0x1
  umull lr,r2,r2,r12
  lsrs r2,r2,#0x3
  add.w r2,r2,r2, lsl #0x2
  sub.w r2,r12,r2, lsl #0x1
  strb r2,[r5,#0x0]
  ldr r2,[0x1402df30]
  str.w r0,[r2,r3,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  mov.w r2,#0x40000000
  ldr r3,[r2,#0x5c]
  bic r3,r3,#0x4
  orrs r3,r4
  str r3,[r2,#0x5c]
  cbnz r1,0x1402df00
  mov.w r2,#0xffffffff
  ldr r3,[0x1402df24]
  str r2,[r3,#0x0]
  ldr r4,[0x1402df34]
  ldr r3,[0x1402df38]
  ldrb r2,[r4,#0x0]
  str.w r0,[r3,r2,lsl #0x2]
  ldr r3,[0x1402df2c]
  adds r2,#0x1
  umull r0,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r4,#0x0]
  msr basepri,r1
  pop {r4,r5,pc}
