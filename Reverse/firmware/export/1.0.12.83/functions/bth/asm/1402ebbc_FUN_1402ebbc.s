; FUN_1402ebbc @ 0x1402ebbc size=214
  push {r4,r5,r6,r7,lr}
  mov r6,lr
  mrs r5,basepri
  cmp r5,#0x40
  beq 0x1402ebee
  mov r12,pc
  ldr r7,[0x1402ec94]
  ldr r2,[0x1402ec98]
  ldrb r4,[r7,#0x0]
  ldr r3,[0x1402ec9c]
  strd r12,lr,[r2,#0x0]
  adds r2,r4,#0x1
  umull r12,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r7,#0x0]
  ldr r3,[0x1402eca0]
  str.w lr,[r3,r4,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  ldr r7,[0x1402eca4]
  movs r3,#0x0
  mov r2,r7
  ldr.w r4,[r2],#0x4
  cbnz r4,0x1402ec5c
  adds r3,#0x1
  cmp r3,#0x5
  bne 0x1402ebfa
  str.w r1,[r7,r0,lsl #0x2]
  cbz r1,0x1402ec2c
  ldr r3,[0x1402eca8]
  ldr r2,[0x1402ecac]
  ldr r3,[r3,#0x8]
  str.w r2,[r3,#0xe8]
  dsb #0xf
  movs r1,#0xa0
  mov.w r2,#0x400
  ldr r3,[0x1402ecb0]
  strb.w r1,[r3,#0x32a]
  str.w r2,[r3,#0x184]
  str r2,[r3,#0x4]
  cbnz r5,0x1402ec36
  mov.w r2,#0xffffffff
  ldr r3,[0x1402ec98]
  str r2,[r3,#0x0]
  ldr r1,[0x1402ecb4]
  ldr r3,[0x1402ecb8]
  ldrb r2,[r1,#0x0]
  str.w r6,[r3,r2,lsl #0x2]
  ldr r3,[0x1402ec9c]
  adds r2,#0x1
  umull r0,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r1,#0x0]
  msr basepri,r5
  movs r0,#0x0
  pop {r4,r5,r6,r7,pc}
  str.w r1,[r7,r0,lsl #0x2]
  cmp r1,#0x0
  bne 0x1402ec2c
  cmp r0,r3
  bne 0x1402ec2c
  add.w r7,r7,r3, lsl #0x2
  ldr.w r2,[r7],#0x4
  cbnz r2,0x1402ec8c
  adds r3,#0x1
  cmp r3,#0x5
  bne 0x1402ec6c
  mov.w r2,#0x400
  ldr r3,[0x1402ecb0]
  str.w r2,[r3,#0x84]
  dsb #0xf
  isb #0xf
  b 0x1402ec2c
  cmp r3,#0x4
  bgt 0x1402ec78
  b 0x1402ec2c
