; FUN_14000060 @ 0x14000060 size=140
  push {r3,lr}
  bl 0x140001bc
  bl 0x140000a4
  movs r2,#0x82
  ldr r3,[0x14000078]
  str r2,[r3,#0x8]
  pop.w {r3,lr}
  b.w 0x14000130
  mov r1,lr
  push {r4,r5,lr}
  mrs r0,basepri
  cmp r0,#0x40
  beq 0x14000164
  mov r2,pc
  ldr r5,[0x140001a4]
  ldr r3,[0x140001a8]
  ldrb r4,[r5,#0x0]
  str r2,[r3,#0x0]
  str.w lr,[r3,#0x4]
  ldr r3,[0x140001ac]
  adds r2,r4,#0x1
  umull r12,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r5,#0x0]
  ldr r3,[0x140001b0]
  str.w lr,[r3,r4,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  mov.w r2,#0x40000000
  ldr r3,[r2,#0x5c]
  orr r3,r3,#0x400
  str r3,[r2,#0x5c]
  cbnz r0,0x14000180
  mov.w r2,#0xffffffff
  ldr r3,[0x140001a8]
  str r2,[r3,#0x0]
  ldr r4,[0x140001b4]
  ldr r3,[0x140001b8]
  ldrb r2,[r4,#0x0]
  str.w r1,[r3,r2,lsl #0x2]
  ldr r3,[0x140001ac]
  adds r2,#0x1
  umull r1,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r4,#0x0]
  msr basepri,r0
  pop {r4,r5,pc}
