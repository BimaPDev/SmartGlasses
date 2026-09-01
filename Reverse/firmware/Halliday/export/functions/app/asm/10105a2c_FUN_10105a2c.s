; FUN_10105a2c @ 0x10105a2c size=94
  push {r4,r5,r6,r7,r8,lr}
  ldrsh.w r7,[r0,#0x12e]
  mov r4,r0
  mov r6,r1
  mov r5,r2
  mov r8,r3
  cbnz r7,0x10105a48
  ldrsh.w r1,[r4,#0x130]
  cbnz r1,0x10105a6a
  pop.w {r4,r5,r6,r7,r8,pc}
  ldr.w r2,[r0,#0x238]
  mov r0,r3
  ldr r3,[r6,#0xc]
  mov r1,r7
  ldr.w r7,[r3,r5,lsl #0x3]
  bl 0x100f85ec
  ldr r3,[r6,#0xc]
  ldrsh.w r1,[r4,#0x130]
  add r0,r7
  str.w r0,[r3,r5,lsl #0x3]
  cmp r1,#0x0
  beq 0x10105a44
  ldr r7,[r6,#0xc]
  ldr.w r2,[r4,#0x238]
  add.w r7,r7,r5, lsl #0x3
  mov r0,r8
  ldr r4,[r7,#0x4]
  bl 0x100f85ec
  ldr r2,[r6,#0xc]
  lsls r5,r5,#0x3
  add r0,r4
  add r5,r2
  str r0,[r5,#0x4]
  pop.w {r4,r5,r6,r7,r8,pc}
