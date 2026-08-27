; FUN_140b4844 @ 0x140b4844 size=170
  push {r4,r5,r6,lr}
  mov r5,lr
  mov r4,r0
  mrs r6,basepri
  cmp r6,#0x40
  beq 0x140b487a
  mov r2,pc
  ldr r0,[0x140b48f0]
  ldr r3,[0x140b48f4]
  ldrb r1,[r0,#0x0]
  str r2,[r3,#0x0]
  str.w lr,[r3,#0x4]
  ldr r3,[0x140b48f8]
  adds r2,r1,#0x1
  umull r12,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r0,#0x0]
  ldr r3,[0x140b48fc]
  str.w lr,[r3,r1,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  movs r0,#0x0
  bl 0x14027fb4
  bl 0x140e59d8
  mov r1,r4
  movs r0,#0x0
  bl 0x14028078
  movs r0,#0x0
  bl 0x14027f98
  movw r1,#0x44c
  mul r1,r4,r1
  mov r0,r1
  bl 0x14030034
  bl 0x140305a4
  cbnz r6,0x140b48b4
  mov.w r2,#0xffffffff
  ldr r3,[0x140b48f4]
  str r2,[r3,#0x0]
  ldr r0,[0x140b4900]
  ldr r3,[0x140b48f8]
  ldrb r1,[r0,#0x0]
  adds r2,r1,#0x1
  umull r12,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r0,#0x0]
  ldr r3,[0x140b4904]
  str.w r5,[r3,r1,lsl #0x2]
  msr basepri,r6
  movs r1,#0xfa
  ldr r3,[0x140b4908]
  mul r1,r4,r1
  ldr r0,[r3,#0x0]
  bl 0x140e5378
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  rsbs r0,r0
  pop {r4,r5,r6,pc}
