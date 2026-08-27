; FUN_1402e5f8 @ 0x1402e5f8 size=124
  mov r1,lr
  push {r4,r5,lr}
  mrs r0,basepri
  cmp r0,#0x40
  beq 0x1402e62c
  mov r2,pc
  ldr r5,[0x1402e674]
  ldr r3,[0x1402e678]
  ldrb r4,[r5,#0x0]
  str r2,[r3,#0x0]
  str.w lr,[r3,#0x4]
  ldr r3,[0x1402e67c]
  adds r2,r4,#0x1
  umull r12,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r5,#0x0]
  ldr r3,[0x1402e680]
  str.w lr,[r3,r4,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  mov.w r2,#0x80000
  ldr r3,[0x1402e684]
  str r2,[r3,#0x8]
  ldr.w r2,[r3,#0x158]
  bic r2,r2,#0x10
  str.w r2,[r3,#0x158]
  cbnz r0,0x1402e650
  mov.w r2,#0xffffffff
  ldr r3,[0x1402e678]
  str r2,[r3,#0x0]
  ldr r4,[0x1402e688]
  ldr r3,[0x1402e68c]
  ldrb r2,[r4,#0x0]
  str.w r1,[r3,r2,lsl #0x2]
  ldr r3,[0x1402e67c]
  adds r2,#0x1
  umull r1,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r4,#0x0]
  msr basepri,r0
  pop {r4,r5,pc}
