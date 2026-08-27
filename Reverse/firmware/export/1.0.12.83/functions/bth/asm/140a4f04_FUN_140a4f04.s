; FUN_140a4f04 @ 0x140a4f04 size=108
  push {r4,r5,r6,lr}
  mov r4,lr
  mrs r5,basepri
  cmp r5,#0x40
  beq 0x140a4f38
  mov r2,pc
  ldr r6,[0x140a4f70]
  ldr r3,[0x140a4f74]
  ldrb r1,[r6,#0x0]
  str r2,[r3,#0x0]
  str.w lr,[r3,#0x4]
  ldr r3,[0x140a4f78]
  adds r2,r1,#0x1
  umull r12,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r6,#0x0]
  ldr r3,[0x140a4f7c]
  str.w lr,[r3,r1,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  bl 0x140e54a8
  cbnz r5,0x140a4f4c
  mov.w r2,#0xffffffff
  ldr r3,[0x140a4f74]
  str r2,[r3,#0x0]
  ldr r6,[0x140a4f80]
  ldr r3,[0x140a4f78]
  ldrb r1,[r6,#0x0]
  adds r2,r1,#0x1
  umull r12,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r6,#0x0]
  ldr r3,[0x140a4f84]
  str.w r4,[r3,r1,lsl #0x2]
  msr basepri,r5
  pop {r4,r5,r6,pc}
