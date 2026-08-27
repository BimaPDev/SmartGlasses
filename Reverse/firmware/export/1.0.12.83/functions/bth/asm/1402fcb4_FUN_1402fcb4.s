; FUN_1402fcb4 @ 0x1402fcb4 size=354
  push {r4,r5,r6,r7,lr}
  ldr r3,[0x1402fe18]
  sub sp,#0xc
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  mov r5,lr
  mrs r6,basepri
  cmp r6,#0x40
  beq 0x1402fcf4
  mov r2,pc
  ldr r0,[0x1402fe1c]
  ldr r3,[0x1402fe20]
  ldrb r1,[r0,#0x0]
  str r2,[r3,#0x0]
  str.w lr,[r3,#0x4]
  ldr r3,[0x1402fe24]
  adds r2,r1,#0x1
  umull r4,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r0,#0x0]
  ldr r3,[0x1402fe28]
  str.w lr,[r3,r1,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  movs r0,#0x5
  add.w r1,sp,#0x2
  bl 0x1402e1fc
  ldrh.w r1,[sp,#0x2]
  movs r0,#0x5
  bic r1,r1,#0x1f00
  uxth r1,r1
  strh.w r1,[sp,#0x2]
  bl 0x1402e37c
  cbnz r6,0x1402fd22
  mov.w r2,#0xffffffff
  ldr r3,[0x1402fe20]
  str r2,[r3,#0x0]
  ldr r4,[0x1402fe2c]
  ldr r3,[0x1402fe24]
  ldrb r1,[r4,#0x0]
  ldr r7,[0x1402fe30]
  adds r2,r1,#0x1
  umull r0,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r4,#0x0]
  str.w r5,[r7,r1,lsl #0x2]
  msr basepri,r6
  movs r0,#0x5e
  add.w r1,sp,#0x2
  bl 0x1402e1fc
  ldrh.w r1,[sp,#0x2]
  movs r0,#0x5e
  bl 0x1402e37c
  movs r0,#0x52
  add.w r1,sp,#0x2
  bl 0x1402e1fc
  ldr r3,[0x1402fe34]
  ldrb r3,[r3,#0x0]
  cmp r3,#0x0
  beq 0x1402fe0e
  cmp r3,#0x3
  ite eq
  mov.eq r0,#0x51
  mov.ne r0,#0x52
  ldrh.w r1,[sp,#0x2]
  bl 0x1402e37c
  movs r0,#0x10
  bl 0x140e5398
  mrs r6,basepri
  cmp r6,#0x40
  beq 0x1402fdae
  mov r12,pc
  ldr r0,[0x1402fe1c]
  ldr r2,[0x1402fe20]
  ldrb r1,[r0,#0x0]
  ldr r3,[0x1402fe24]
  strd r12,r5,[r2,#0x0]
  adds r2,r1,#0x1
  umull r12,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r0,#0x0]
  ldr r3,[0x1402fe28]
  str.w r5,[r3,r1,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  movs r0,#0x5
  add.w r1,sp,#0x2
  bl 0x1402e1fc
  ldrh.w r1,[sp,#0x2]
  movs r0,#0x5
  and r1,r1,#0xff00
  orr r1,r1,#0x708
  strh.w r1,[sp,#0x2]
  bl 0x1402e37c
  cbnz r6,0x1402fdde
  mov.w r2,#0xffffffff
  ldr r3,[0x1402fe20]
  str r2,[r3,#0x0]
  ldrb r2,[r4,#0x0]
  ldr r3,[0x1402fe24]
  str.w r5,[r7,r2,lsl #0x2]
  adds r2,#0x1
  umull r1,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r4,#0x0]
  msr basepri,r6
  ldr r3,[0x1402fe18]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  mov.w r3,#0x0
  bne 0x1402fe12
  add sp,#0xc
  pop {r4,r5,r6,r7,pc}
  movs r0,#0x51
  b 0x1402fd72
  bl 0x14039adc
