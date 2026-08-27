; FUN_140a4c1c @ 0x140a4c1c size=196
  push {r4,r5,r6,r7,r8,lr}
  ldr r3,[0x140a4ce0]
  sub sp,#0x8
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  mov r4,lr
  mov r8,r0
  mov r7,r1
  mov r6,r2
  mrs r5,basepri
  cmp r5,#0x40
  beq 0x140a4c62
  mov r12,pc
  ldr r0,[0x140a4ce4]
  ldr r2,[0x140a4ce8]
  ldrb r1,[r0,#0x0]
  ldr r3,[0x140a4cec]
  strd r12,lr,[r2,#0x0]
  adds r2,r1,#0x1
  umull r12,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r0,#0x0]
  ldr r3,[0x140a4cf0]
  str.w lr,[r3,r1,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  cbz r6,0x140a4c7e
  mov r0,r8
  strh.w r6,[sp,#0x2]
  bl 0x140e55e8
  ldrh.w r3,[sp,#0x2]
  adds r3,#0x1
  cmp r3,r0
  blt 0x140a4cc2
  mov.w r0,#0xffffffff
  cbnz r5,0x140a4c8c
  mov.w r2,#0xffffffff
  ldr r3,[0x140a4ce8]
  str r2,[r3,#0x0]
  ldr r6,[0x140a4cf4]
  ldr r3,[0x140a4cec]
  ldrb r1,[r6,#0x0]
  adds r2,r1,#0x1
  umull r7,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r6,#0x0]
  ldr r3,[0x140a4cf8]
  str.w r4,[r3,r1,lsl #0x2]
  msr basepri,r5
  ldr r3,[0x140a4ce0]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  mov.w r3,#0x0
  bne 0x140a4cdc
  add sp,#0x8
  pop.w {r4,r5,r6,r7,r8,pc}
  movs r2,#0x2
  mov r0,r8
  add.w r1,sp,r2
  bl 0x140e53a8
  mov r2,r6
  mov r1,r7
  mov r0,r8
  bl 0x140e53a8
  movs r0,#0x0
  b 0x140a4c82
  bl 0x14039adc
