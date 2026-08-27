; FUN_1402fe38 @ 0x1402fe38 size=200
  push {r4,r5,r6,lr}
  ldr r3,[0x1402ff00]
  ldr r2,[0x1402ff04]
  sub sp,#0x8
  ldr r2,[r2,#0x0]
  str r2,[sp,#0x4]
  mov.w r2,#0x0
  mov r5,r0
  mov r6,lr
  str r0,[r3,#0x0]
  mrs r4,basepri
  cmp r4,#0x40
  beq 0x1402fe7e
  mov r2,pc
  ldr r0,[0x1402ff08]
  ldr r3,[0x1402ff0c]
  ldrb r1,[r0,#0x0]
  str r2,[r3,#0x0]
  str.w lr,[r3,#0x4]
  ldr r3,[0x1402ff10]
  adds r2,r1,#0x1
  umull r12,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r0,#0x0]
  ldr r3,[0x1402ff14]
  str.w lr,[r3,r1,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  movs r0,#0x5
  add.w r1,sp,#0x2
  bl 0x1402e1fc
  ldrh.w r1,[sp,#0x2]
  cbz r5,0x1402feea
  orr r1,r1,#0x1800
  movs r0,#0x5
  ldr r5,[0x1402ff18]
  strh.w r1,[sp,#0x2]
  bl 0x1402e37c
  mov r1,r5
  movs r0,#0x3
  bl 0x1402ebbc
  cbnz r4,0x1402feb6
  mov.w r2,#0xffffffff
  ldr r3,[0x1402ff0c]
  str r2,[r3,#0x0]
  ldr r1,[0x1402ff1c]
  ldr r3,[0x1402ff20]
  ldrb r2,[r1,#0x0]
  str.w r6,[r3,r2,lsl #0x2]
  ldr r3,[0x1402ff10]
  adds r2,#0x1
  umull r0,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r1,#0x0]
  msr basepri,r4
  ldr r3,[0x1402ff04]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  mov.w r3,#0x0
  bne 0x1402fefc
  add sp,#0x8
  pop {r4,r5,r6,pc}
  bic r1,r1,#0x1800
  uxth r1,r1
  movs r0,#0x5
  strh.w r1,[sp,#0x2]
  bl 0x1402e37c
  b 0x1402fea4
  bl 0x14039adc
