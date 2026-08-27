; FUN_14026cd0 @ 0x14026cd0 size=188
  ldr r2,[0x14025ae8]
  cmp r0,r2
  bcc 0x14025ae4
  add.w r2,r2,#0x118
  cmp r0,r2
  bhi 0x14025ae4
  movs r3,#0x0
  push {lr}
  sub sp,#0xc
  str r1,[sp,#0x0]
  mov r2,r3
  mov r1,r3
  bl 0x14025890
  add sp,#0xc
  pop.w pc
  movs r0,#0x2
  bx lr
  mov r2,lr
  push {r3,r4,r5,lr}
  mrs r0,basepri
  cmp r0,#0x40
  beq 0x14026d04
  mov r1,pc
  ldr r5,[0x14026d64]
  ldr r3,[0x14026d68]
  ldrb r4,[r5,#0x0]
  str r1,[r3,#0x0]
  str.w lr,[r3,#0x4]
  ldr r3,[0x14026d6c]
  adds r1,r4,#0x1
  umull r12,r3,r3,r1
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r1,r3, lsl #0x1
  strb r3,[r5,#0x0]
  ldr r3,[0x14026d70]
  str.w lr,[r3,r4,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  ldr r3,[0x14026d74]
  ldrb r1,[r3,#0x0]
  cbnz r1,0x14026d4a
  movs r1,#0x1
  mov r5,r1
  strb r1,[r3,#0x0]
  cbnz r0,0x14026d20
  mov.w r1,#0xffffffff
  ldr r3,[0x14026d68]
  str r1,[r3,#0x0]
  ldr r4,[0x14026d78]
  ldr r3,[0x14026d6c]
  ldrb.w r12,[r4,#0x0]
  add.w r1,r12,#0x1
  umull lr,r3,r3,r1
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r1,r3, lsl #0x1
  strb r3,[r4,#0x0]
  ldr r3,[0x14026d7c]
  str.w r2,[r3,r12,lsl #0x2]
  msr basepri,r0
  cbnz r5,0x14026d4e
  pop {r3,r4,r5,pc}
  movs r5,#0x0
  b 0x14026d16
  ldr r4,[0x14026d80]
  ldr r0,[r4,#0x0]
  bl 0x14025b98
  ldr r0,[r4,#0x0]
  mov.w r1,#0x280
  pop.w {r3,r4,r5,lr}
  b.w 0x14025ac0
