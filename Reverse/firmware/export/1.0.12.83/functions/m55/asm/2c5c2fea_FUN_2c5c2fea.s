; FUN_2c5c2fea @ 0x2c5c2fea size=90
  push {r4,r5,r6,r7,r8,lr}
  bls 0x2c5c3024
  add r1,r0
  ldr r4,[0x2c5c3044]
  ldr.w r8,[0x2c5c3048]
  movs r7,#0x64
  movw r6,#0x270f
  umull r5,r3,r8,r2
  mov lr,r2
  lsrs r3,r3,#0x5
  cmp lr,r6
  mls r12,r7,r3,r2
  mov r2,r3
  add.w r5,r4,r12, lsl #0x1
  ldrb.w r3,[r4,r12,lsl #0x1]
  ldrb.w r12,[r5,#0x1]
  strb.w r12,[r1,#-0x1]
  strb.w r3,[r1,#-0x2]!
  bhi 0x2c5c2ffe
  cmp r2,#0x9
  bls 0x2c5c303c
  ldr r3,[0x2c5c3044]
  add.w r1,r3,r2, lsl #0x1
  ldrb.w r2,[r3,r2,lsl #0x1]
  ldrb r3,[r1,#0x1]
  strb r2,[r0,#0x0]
  strb r3,[r0,#0x1]
  pop.w {r4,r5,r6,r7,r8,pc}
  adds r2,#0x30
  strb r2,[r0,#0x0]
  pop.w {r4,r5,r6,r7,r8,pc}
