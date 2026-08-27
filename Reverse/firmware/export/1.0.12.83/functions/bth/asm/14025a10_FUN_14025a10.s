; FUN_14025a10 @ 0x14025a10 size=144
  push {r3,r4,r5,r6,r7,lr}
  mov r6,lr
  mov r5,r0
  mrs r4,basepri
  cmp r4,#0x40
  beq 0x14025a44
  mov r12,pc
  ldr r7,[0x14025aa0]
  ldr r2,[0x14025aa4]
  ldrb r0,[r7,#0x0]
  ldr r3,[0x14025aa8]
  strd r12,lr,[r2,#0x0]
  adds r2,r0,#0x1
  umull r12,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r7,#0x0]
  ldr r3,[0x14025aac]
  str.w lr,[r3,r0,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  ldr r3,[0x14025ab0]
  ldr.w r0,[r3,#0x12c]
  cbz r0,0x14025a58
  ldr r2,[r0,#0x4]
  str.w r2,[r3,#0x12c]
  cbnz r4,0x14025a62
  mov.w r2,#0xffffffff
  ldr r3,[0x14025aa4]
  str r2,[r3,#0x0]
  ldr r7,[0x14025ab4]
  ldr.w r12,[0x14025abc]
  ldrb r2,[r7,#0x0]
  ldr r3,[0x14025aa8]
  str.w r6,[r12,r2,lsl #0x2]
  adds r2,#0x1
  umull r6,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r7,#0x0]
  msr basepri,r4
  cbz r0,0x14025a96
  ldrb r3,[r0,#0x0]
  cbnz r3,0x14025a98
  movs r2,#0x1
  strd r5,r1,[r0,#0xc]
  str r3,[r0,#0x4]
  strb r2,[r0,#0x0]
  pop {r3,r4,r5,r6,r7,pc}
  mov r1,r3
  ldr r0,[0x14025ab8]
  bl 0x1402b0f8
