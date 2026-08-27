; FUN_14028ee8 @ 0x14028ee8 size=132
  cmp r0,#0x1f
  bhi 0x14028f68
  push {r4,r5,lr}
  mov r4,lr
  mrs r1,basepri
  cmp r1,#0x40
  beq 0x14028f24
  mov r2,pc
  ldr r5,[0x14028f6c]
  ldr r3,[0x14028f70]
  ldrb.w r12,[r5,#0x0]
  str r2,[r3,#0x0]
  str.w lr,[r3,#0x4]
  ldr r3,[0x14028f74]
  add.w r2,r12,#0x1
  umull lr,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r5,#0x0]
  ldr r3,[0x14028f78]
  str.w r4,[r3,r12,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  movs r3,#0x1
  ldr r2,[0x14028f7c]
  lsl.w r0,r3,r0
  ldr r3,[r2,#0x0]
  orrs r0,r3
  str r0,[r2,#0x0]
  cbnz r1,0x14028f42
  mov.w r2,#0xffffffff
  ldr r3,[0x14028f70]
  str r2,[r3,#0x0]
  ldr r0,[0x14028f80]
  ldr r3,[0x14028f84]
  ldrb r2,[r0,#0x0]
  str.w r4,[r3,r2,lsl #0x2]
  ldr r3,[0x14028f74]
  adds r2,#0x1
  umull r4,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r0,#0x0]
  msr basepri,r1
  movs r0,#0x0
  pop {r4,r5,pc}
  movs r0,#0x1
  bx lr
