; FUN_140a4b80 @ 0x140a4b80 size=132
  push {r4,r5,r6,r7,r8,lr}
  mov r5,lr
  mov r8,r0
  mov r7,r1
  mov r6,r2
  mrs r4,basepri
  cmp r4,#0x40
  beq 0x140a4bba
  mov r12,pc
  ldr r0,[0x140a4c04]
  ldr r2,[0x140a4c08]
  ldrb r1,[r0,#0x0]
  ldr r3,[0x140a4c0c]
  strd r12,lr,[r2,#0x0]
  adds r2,r1,#0x1
  umull r12,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r0,#0x0]
  ldr r3,[0x140a4c10]
  str.w lr,[r3,r1,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  movs r1,#0x0
  mov r2,r6
  mov r0,r7
  bl 0x140e5658
  mov r2,r7
  mov r1,r6
  mov r0,r8
  bl 0x140e5918
  cbnz r4,0x140a4bde
  mov.w r2,#0xffffffff
  ldr r3,[0x140a4c08]
  str r2,[r3,#0x0]
  ldr r1,[0x140a4c14]
  ldr r3,[0x140a4c18]
  ldrb r2,[r1,#0x0]
  str.w r5,[r3,r2,lsl #0x2]
  ldr r3,[0x140a4c0c]
  adds r2,#0x1
  umull r0,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r1,#0x0]
  msr basepri,r4
  pop.w {r4,r5,r6,r7,r8,pc}
