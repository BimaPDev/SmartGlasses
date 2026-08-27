; FUN_140000a4 @ 0x140000a4 size=116
  mov r1,lr
  push {r4,r5,lr}
  mrs r0,basepri
  cmp r0,#0x40
  beq 0x140000d8
  mov r2,pc
  ldr r5,[0x14000118]
  ldr r3,[0x1400011c]
  ldrb r4,[r5,#0x0]
  str r2,[r3,#0x0]
  str.w lr,[r3,#0x4]
  ldr r3,[0x14000120]
  adds r2,r4,#0x1
  umull r12,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r5,#0x0]
  ldr r3,[0x14000124]
  str.w lr,[r3,r4,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  mov.w r2,#0x40000000
  ldr r3,[r2,#0x5c]
  orr r3,r3,#0x200
  str r3,[r2,#0x5c]
  cbnz r0,0x140000f4
  mov.w r2,#0xffffffff
  ldr r3,[0x1400011c]
  str r2,[r3,#0x0]
  ldr r4,[0x14000128]
  ldr r3,[0x1400012c]
  ldrb r2,[r4,#0x0]
  str.w r1,[r3,r2,lsl #0x2]
  ldr r3,[0x14000120]
  adds r2,#0x1
  umull r1,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r4,#0x0]
  msr basepri,r0
  pop {r4,r5,pc}
