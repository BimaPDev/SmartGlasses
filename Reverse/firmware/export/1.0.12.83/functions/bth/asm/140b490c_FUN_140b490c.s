; FUN_140b490c @ 0x140b490c size=122
  push {r3,r4,r5,lr}
  ldr r3,[0x140b4988]
  mov r5,lr
  ldr r0,[r3,#0x0]
  bl 0x140e5718
  mrs r4,basepri
  cmp r4,#0x40
  beq 0x140b4946
  mov r2,pc
  ldr r0,[0x140b498c]
  ldr r3,[0x140b4990]
  ldrb r1,[r0,#0x0]
  str r2,[r3,#0x0]
  str r5,[r3,#0x4]
  ldr r3,[0x140b4994]
  adds r2,r1,#0x1
  umull r12,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r0,#0x0]
  ldr r3,[0x140b4998]
  str.w r5,[r3,r1,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  movs r0,#0x0
  bl 0x14027fb4
  bl 0x140e59d8
  cbnz r4,0x140b4960
  mov.w r2,#0xffffffff
  ldr r3,[0x140b4990]
  str r2,[r3,#0x0]
  ldr r1,[0x140b499c]
  ldr r3,[0x140b49a0]
  ldrb r2,[r1,#0x0]
  str.w r5,[r3,r2,lsl #0x2]
  ldr r3,[0x140b4994]
  adds r2,#0x1
  umull r0,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r1,#0x0]
  msr basepri,r4
  movs r0,#0x0
  pop {r3,r4,r5,pc}
