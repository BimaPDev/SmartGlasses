; FUN_140be800 @ 0x140be800 size=268
  movs r3,#0x0
  push {r4,r5,r6,r7,lr}
  ldr r2,[0x140be90c]
  sub sp,#0xc
  ldr r2,[r2,#0x0]
  str r2,[sp,#0x4]
  mov.w r2,#0x0
  mov r4,lr
  strb.w r3,[sp,#0x3]
  mrs r6,basepri
  cmp r6,#0x40
  beq 0x140be846
  mov r2,pc
  ldr r0,[0x140be910]
  ldr r3,[0x140be914]
  ldrb r1,[r0,#0x0]
  str r2,[r3,#0x0]
  str.w lr,[r3,#0x4]
  ldr r3,[0x140be918]
  adds r2,r1,#0x1
  umull r5,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r0,#0x0]
  ldr r3,[0x140be91c]
  str.w lr,[r3,r1,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  ldr r0,[0x140be920]
  bl 0x140e54a8
  cbnz r6,0x140be85c
  mov.w r2,#0xffffffff
  ldr r3,[0x140be914]
  str r2,[r3,#0x0]
  ldr r5,[0x140be924]
  ldr r2,[0x140be918]
  ldrb.w r12,[r5,#0x0]
  add.w r1,r12,#0x1
  umull r7,r3,r2,r1
  lsrs r3,r3,#0x3
  ldr r7,[0x140be928]
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r1,r3, lsl #0x1
  strb r3,[r5,#0x0]
  str.w r4,[r7,r12,lsl #0x2]
  msr basepri,r6
  cmp r0,#0x0
  ble 0x140be904
  mrs r6,basepri
  cmp r6,#0x40
  beq 0x140be8b2
  mov r0,pc
  ldr r1,[0x140be910]
  ldr r3,[0x140be914]
  strd r0,r4,[r3,#0x0]
  ldrb r3,[r1,#0x0]
  ldr r0,[0x140be91c]
  str.w r4,[r0,r3,lsl #0x2]
  adds r3,#0x1
  umull r0,r2,r2,r3
  lsrs r2,r2,#0x3
  add.w r2,r2,r2, lsl #0x2
  sub.w r2,r3,r2, lsl #0x1
  strb r2,[r1,#0x0]
  movs r3,#0x40
  msr basepri,r3
  movs r2,#0x1
  ldr r0,[0x140be920]
  add.w r1,sp,#0x3
  bl 0x140e5448
  cbz r6,0x140be8fa
  ldrb r2,[r5,#0x0]
  ldr r3,[0x140be918]
  str.w r4,[r7,r2,lsl #0x2]
  adds r2,#0x1
  umull r1,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r5,#0x0]
  msr basepri,r6
  ldrb.w r0,[sp,#0x3]
  ldr r3,[0x140be90c]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  mov.w r3,#0x0
  bne 0x140be908
  add sp,#0xc
  pop {r4,r5,r6,r7,pc}
  mov.w r2,#0xffffffff
  ldr r3,[0x140be914]
  str r2,[r3,#0x0]
  b 0x140be8c6
  movs r0,#0x0
  b 0x140be8e8
  bl 0x14039adc
