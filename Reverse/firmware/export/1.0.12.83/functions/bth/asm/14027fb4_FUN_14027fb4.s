; FUN_14027fb4 @ 0x14027fb4 size=134
  mov r1,lr
  push {r4,r5,lr}
  mrs r0,basepri
  cmp r0,#0x40
  beq 0x14027fe8
  mov r2,pc
  ldr r5,[0x1402803c]
  ldr r3,[0x14028040]
  ldrb r4,[r5,#0x0]
  str r2,[r3,#0x0]
  str.w lr,[r3,#0x4]
  ldr r3,[0x14028044]
  adds r2,r4,#0x1
  umull r12,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r5,#0x0]
  ldr r3,[0x14028048]
  str.w lr,[r3,r4,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  movs r4,#0x0
  movs r2,#0x1
  ldr r3,[0x1402804c]
  ldr r5,[0x14028050]
  str.w r5,[r3,#0xc00]
  str r4,[r3,#0x8]
  str.w r2,[r3,#0xc00]
  cbnz r0,0x1402800a
  mov.w r2,#0xffffffff
  ldr r3,[0x14028040]
  str r2,[r3,#0x0]
  ldr r4,[0x14028054]
  ldr r3,[0x14028058]
  ldrb r2,[r4,#0x0]
  str.w r1,[r3,r2,lsl #0x2]
  ldr r3,[0x14028044]
  adds r2,#0x1
  umull r1,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r4,#0x0]
  msr basepri,r0
  movs r0,#0x0
  ldr r3,[0x1402805c]
  ldr r2,[0x1402804c]
  ldr.w r2,[r2,#0xc00]
  str r0,[r3,#0x0]
  pop {r4,r5,pc}
