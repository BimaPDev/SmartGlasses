; FUN_10080444 @ 0x10080444 size=82
  push {r3,r4,r5,r6,r7,r8,r9,lr}
  movw r3,#0x10d8
  mov r6,r0
  movw r9,#0xffff
  ldr r4,[0x10080498]
  ldr r2,[r0,#0xc]
  ldrh r5,[r4,#0x8]
  ldrh r7,[r2,r3]
  add.w r8,r4,#0xe
  cmp r5,r7
  bcc 0x10080468
  mov.w r1,#0xffffffff
  b 0x1008048c
  mov r1,r5
  mov r0,r6
  bl 0x10121e28
  cbnz r0,0x10080492
  ldrh.w r3,[r8,r5,lsl #0x1]
  cmp r3,r9
  bne 0x10080492
  movw r2,#0xfffd
  add.w r3,r4,r5, lsl #0x1
  strh r2,[r3,#0xe]
  ldrh r3,[r4,#0x4]
  strh r5,[r4,#0x8]
  subs r3,#0x1
  strh r3,[r4,#0x4]
  mov r0,r1
  pop.w {r3,r4,r5,r6,r7,r8,r9,pc}
  adds r5,#0x1
  b 0x1008045e
