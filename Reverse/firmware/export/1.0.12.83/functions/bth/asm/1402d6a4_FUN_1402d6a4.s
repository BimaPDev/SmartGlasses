; FUN_1402d6a4 @ 0x1402d6a4 size=112
  push {r3,r4,r5,lr}
  mov r5,lr
  bl 0x140e5258
  ldr r3,[0x1402d714]
  subs r4,r0,#0x0
  ldr r2,[r3,#0xc]
  bic r2,r2,#0xff000000
  orr r2,r2,#0x77000000
  str r2,[r3,#0xc]
  ldr r2,[r3,#0x2c]
  orr r2,r2,#0x400000
  str r2,[r3,#0x2c]
  ldr r2,[r3,#0x2c]
  bic r2,r2,#0x800000
  str r2,[r3,#0x2c]
  ldr r2,[r3,#0x30]
  bic r2,r2,#0xc00000
  str r2,[r3,#0x30]
  blt 0x1402d704
  cbnz r4,0x1402d6e0
  mov.w r2,#0xffffffff
  ldr r3,[0x1402d718]
  str r2,[r3,#0x0]
  ldr r1,[0x1402d71c]
  ldr r3,[0x1402d720]
  ldrb r2,[r1,#0x0]
  str.w r5,[r3,r2,lsl #0x2]
  ldr r3,[0x1402d724]
  adds r2,#0x1
  umull r0,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r1,#0x0]
  msr basepri,r4
  pop {r3,r4,r5,pc}
  movs r0,#0x0
  ldr r3,[0x1402d728]
  bic r4,r4,#0x80000000
  strb r0,[r3,#0x0]
  bl 0x140e5958
  b 0x1402d6d6
