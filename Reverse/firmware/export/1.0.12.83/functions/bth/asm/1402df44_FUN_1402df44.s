; FUN_1402df44 @ 0x1402df44 size=150
  mov r1,lr
  push {r4,r5,r6,lr}
  mrs r4,basepri
  cmp r4,#0x40
  beq 0x1402df78
  mov r2,pc
  ldr r6,[0x1402dfdc]
  ldr r3,[0x1402dfe0]
  ldrb r5,[r6,#0x0]
  str r2,[r3,#0x0]
  str.w lr,[r3,#0x4]
  ldr r3,[0x1402dfe4]
  adds r2,r5,#0x1
  umull r12,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r6,#0x0]
  ldr r3,[0x1402dfe8]
  str.w lr,[r3,r5,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  cbnz r0,0x1402dfbe
  mov.w r2,#0x40000000
  ldr r3,[r2,#0x70]
  bic r3,r3,#0x1c
  str r3,[r2,#0x70]
  cbnz r4,0x1402df96
  mov.w r2,#0xffffffff
  ldr r3,[0x1402dfe0]
  str r2,[r3,#0x0]
  ldr r5,[0x1402dfec]
  ldr r3,[0x1402dfe4]
  ldrb.w r12,[r5,#0x0]
  add.w r2,r12,#0x1
  umull r6,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r5,#0x0]
  ldr r3,[0x1402dff0]
  str.w r1,[r3,r12,lsl #0x2]
  msr basepri,r4
  pop {r4,r5,r6,pc}
  cmp r0,#0x1
  beq 0x1402dfc6
  movs r0,#0x1
  b 0x1402df8c
  mov.w r2,#0x40000000
  ldr r3,[r2,#0x70]
  movs r0,#0x0
  bic r3,r3,#0x1c
  orr r3,r3,#0x4
  str r3,[r2,#0x70]
  b 0x1402df8c
