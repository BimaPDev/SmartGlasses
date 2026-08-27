; FUN_14028888 @ 0x14028888 size=174
  lsrs r1,r0,#0x4
  push {r3,r4,r5,r6,r7,lr}
  bne 0x14028930
  mov r3,r0
  lsls r3,r3,#0x1c
  and r5,r0,#0xf
  bmi 0x14028928
  ldr r6,[0x14028938]
  ldrb r1,[r6,r5]
  cmp r1,#0x0
  beq 0x14028920
  mov r4,lr
  bl 0x14028694
  mrs r0,basepri
  cmp r0,#0x40
  beq 0x140288d4
  mov r12,pc
  ldr r7,[0x1402893c]
  ldr r3,[0x14028940]
  ldrb r2,[r7,#0x0]
  ldr r1,[0x14028944]
  strd r12,r4,[r3,#0x0]
  adds r3,r2,#0x1
  umull r12,r1,r1,r3
  lsrs r1,r1,#0x3
  add.w r1,r1,r1, lsl #0x2
  sub.w r1,r3,r1, lsl #0x1
  ldr r3,[0x14028948]
  strb r1,[r7,#0x0]
  str.w r4,[r3,r2,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  movs r2,#0x0
  mov.w r3,#0x1000
  ldr r1,[0x1402894c]
  strb r2,[r6,r5]
  ldr r2,[r1,#0x30]
  lsls r3,r5
  and r3,r3,#0xff000
  bic.w r3,r2,r3
  str r3,[r1,#0x30]
  cbnz r0,0x140288fc
  mov.w r2,#0xffffffff
  ldr r3,[0x14028940]
  str r2,[r3,#0x0]
  ldr r1,[0x14028950]
  ldr r3,[0x14028954]
  ldrb r2,[r1,#0x0]
  str.w r4,[r3,r2,lsl #0x2]
  ldr r3,[0x14028944]
  adds r2,#0x1
  umull r4,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r1,#0x0]
  msr basepri,r0
  pop {r3,r4,r5,r6,r7,pc}
  mov r2,r5
  ldr r0,[0x14028958]
  bl 0x1402b0f8
  mov r2,r5
  ldr r0,[0x1402895c]
  bl 0x1402b0f8
  ldr r0,[0x14028960]
  bl 0x1402b0f8
