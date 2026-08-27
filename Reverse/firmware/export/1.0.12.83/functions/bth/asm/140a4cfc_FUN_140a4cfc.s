; FUN_140a4cfc @ 0x140a4cfc size=200
  movs r3,#0x0
  push {r4,r5,r6,lr}
  ldr r2,[0x140a4dc4]
  sub sp,#0x20
  ldr r2,[r2,#0x0]
  str r2,[sp,#0x1c]
  mov.w r2,#0x0
  mov r5,lr
  strd r3,r3,[sp,#0x10]
  str r3,[sp,#0xc]
  str r3,[sp,#0x18]
  strh.w r3,[sp,#0xa]
  mrs r4,basepri
  cmp r4,#0x40
  beq 0x140a4d4a
  mov r2,pc
  ldr r6,[0x140a4dc8]
  ldr r3,[0x140a4dcc]
  ldrb r1,[r6,#0x0]
  str r2,[r3,#0x0]
  str.w lr,[r3,#0x4]
  ldr r3,[0x140a4dd0]
  adds r2,r1,#0x1
  umull r12,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r6,#0x0]
  ldr r3,[0x140a4dd4]
  str.w lr,[r3,r1,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  add r2,sp,#0x18
  add r3,sp,#0x10
  strd r3,r2,[sp,#0x0]
  movs r1,#0x2
  add r3,sp,#0x14
  add r2,sp,#0xc
  bl 0x140e5678
  ldr r6,[sp,#0x14]
  ldr r1,[sp,#0xc]
  mov r2,r6
  add.w r0,sp,#0xa
  bl 0x140e5278
  add.w r3,sp,#0xa
  ldr r2,[sp,#0x18]
  ldr r1,[sp,#0x10]
  adds r0,r3,r6
  bl 0x140e5278
  cbnz r4,0x140a4d88
  mov.w r2,#0xffffffff
  ldr r3,[0x140a4dcc]
  str r2,[r3,#0x0]
  ldr r1,[0x140a4dd8]
  ldr r3,[0x140a4ddc]
  ldrb r2,[r1,#0x0]
  str.w r5,[r3,r2,lsl #0x2]
  ldr r3,[0x140a4dd0]
  adds r2,#0x1
  umull r0,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r1,#0x0]
  msr basepri,r4
  ldr r3,[0x140a4dc4]
  ldrh.w r0,[sp,#0xa]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x1c]
  eors r2,r3
  mov.w r3,#0x0
  bne 0x140a4dc0
  add sp,#0x20
  pop {r4,r5,r6,pc}
  bl 0x14039adc
