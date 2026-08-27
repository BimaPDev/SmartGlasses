; FUN_140001cc @ 0x140001cc size=130
  mov r1,lr
  push {r4,r5,lr}
  mrs r0,basepri
  cmp r0,#0x40
  beq 0x14000200
  mov r2,pc
  ldr r5,[0x14000250]
  ldr r3,[0x14000254]
  ldrb r4,[r5,#0x0]
  str r2,[r3,#0x0]
  str.w lr,[r3,#0x4]
  ldr r3,[0x14000258]
  adds r2,r4,#0x1
  umull r12,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r5,#0x0]
  ldr r3,[0x1400025c]
  str.w lr,[r3,r4,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  mov.w r5,#0x800
  ldr r2,[0x14000260]
  mov.w r3,#0x40000000
  str.w r5,[r2,#0xa4]
  mov.w r4,#0x20000
  mov.w r2,#0x40000
  str r4,[r3,#0x64]
  str r2,[r3,#0x64]
  cbnz r0,0x1400022a
  mov.w r2,#0xffffffff
  ldr r3,[0x14000254]
  str r2,[r3,#0x0]
  ldr r4,[0x14000264]
  ldr r3,[0x14000268]
  ldrb r2,[r4,#0x0]
  str.w r1,[r3,r2,lsl #0x2]
  ldr r3,[0x14000258]
  adds r2,#0x1
  umull r1,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r4,#0x0]
  msr basepri,r0
  pop {r4,r5,pc}
