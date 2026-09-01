; FUN_1010c204 @ 0x1010c204 size=202
  push {r3,lr}
  movs r2,#0x11
  movw r1,#0xa1b
  ldr r0,[0x1010c224]
  bl 0x1013b1e8
  cbnz r0,0x1010c220
  pop.w {r3,lr}
  movs r1,#0x7
  ldr r0,[0x1010c224]
  b.w 0x1013b2f2
  pop {r3,pc}
  push {r3,r4,r5,lr}
  mov r4,r0
  mov r5,r1
  bl 0x1013b026
  cmp r0,#0x0
  beq 0x1013b39a
  ldr.w r3,[r4,#0x6e4]
  ldr.w r2,[r4,#0x6d8]
  add.w r3,r4,r3, lsl #0x2
  ldr.w r3,[r3,#0x6dc]
  adds r3,#0x10
  cmp r3,r2
  bcs 0x1013b382
  movs r0,#0x0
  ldr.w r3,[r4,#0x6e4]
  orr r1,r5,#0x10000000
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r3,#0x6d0]
  ldr.w r3,[r3,#0x6dc]
  orr r5,r5,#0x20000000
  str r1,[r2,r3]
  ldr.w r3,[r4,#0x6e4]
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r3,#0x6d0]
  ldr.w r3,[r3,#0x6dc]
  add r3,r2
  str r0,[r3,#0x4]
  ldr.w r3,[r4,#0x6e4]
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r3,#0x6d0]
  ldr.w r3,[r3,#0x6dc]
  add r3,r2
  str r5,[r3,#0x8]
  ldr.w r3,[r4,#0x6e4]
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r3,#0x6d0]
  ldr.w r3,[r3,#0x6dc]
  add r3,r2
  str r0,[r3,#0xc]
  ldr.w r3,[r4,#0x6e4]
  add.w r4,r4,r3, lsl #0x2
  ldr.w r3,[r4,#0x6dc]
  adds r3,#0x10
  str.w r3,[r4,#0x6dc]
  pop {r3,r4,r5,pc}
  mov r0,r4
  bl 0x1010b660
  cmp r0,#0x0
  bne 0x1013b380
  mov r1,r0
  mov r0,r4
  bl 0x1010b62c
  cmp r0,#0x0
  beq 0x1013b316
  b 0x1013b380
  movs r0,#0x3
  b 0x1013b380
