; FUN_1402d69c @ 0x1402d69c size=134
  push {r3,r4,r5,lr}
  mov r4,r0
  mov r5,lr
  bl 0x140e5258
  ldr r3,[0x1402d5c0]
  lsls r1,r4,#0xc
  ldr r2,[r3,#0x48]
  orr r2,r2,#0x3
  str r2,[r3,#0x48]
  ldr r2,[r3,#0xc]
  bic r12,r2,#0xff00
  orr.w r2,r1,r4, lsl #0x8
  orr.w r2,r2,r12
  str r2,[r3,#0xc]
  ldr r2,[r3,#0x2c]
  subs r4,r0,#0x0
  orr r2,r2,#0x40000
  str r2,[r3,#0x2c]
  ldr r2,[r3,#0x2c]
  bic r2,r2,#0x80000
  str r2,[r3,#0x2c]
  ldr r2,[r3,#0x30]
  bic r2,r2,#0xc0000
  str r2,[r3,#0x30]
  blt 0x1402d5b0
  cbnz r4,0x1402d58c
  mov.w r2,#0xffffffff
  ldr r3,[0x1402d5c4]
  str r2,[r3,#0x0]
  ldr r1,[0x1402d5c8]
  ldr r3,[0x1402d5cc]
  ldrb r2,[r1,#0x0]
  str.w r5,[r3,r2,lsl #0x2]
  ldr r3,[0x1402d5d0]
  adds r2,#0x1
  umull r0,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r1,#0x0]
  msr basepri,r4
  pop {r3,r4,r5,pc}
  movs r0,#0x0
  ldr r3,[0x1402d5d4]
  bic r4,r4,#0x80000000
  strb r0,[r3,#0x0]
  bl 0x140e5958
  b 0x1402d582
  movs r0,#0x4
  b.w 0x1402d540
