; FUN_1010b738 @ 0x1010b738 size=166
  push {r4,r5,r6,r7,r8,lr}
  ldr r4,[0x1010b7e0]
  mov r5,r0
  mov r0,r4
  mov r6,r1
  mov r7,r2
  mov r8,r3
  bl 0x1013b026
  cmp r0,#0x0
  beq 0x1010b7da
  ldr.w r3,[r4,#0x6e4]
  ldr.w r2,[r4,#0x6d8]
  add.w r3,r4,r3, lsl #0x2
  ldr.w r3,[r3,#0x6dc]
  adds r3,#0x10
  cmp r3,r2
  bcs 0x1010b7c2
  movs r0,#0x0
  ldr.w r3,[r4,#0x6e4]
  ldr r1,[0x1010b7e4]
  add.w r2,r3,#0x1b4
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r4,r2,lsl #0x2]
  ldr.w r3,[r3,#0x6dc]
  str r1,[r2,r3]
  ldr.w r3,[r4,#0x6e4]
  add.w r2,r3,#0x1b4
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r4,r2,lsl #0x2]
  ldr.w r3,[r3,#0x6dc]
  add r3,r2
  str r0,[r3,#0x4]
  ldr.w r3,[r4,#0x6e4]
  add.w r2,r3,#0x1b6
  add.w r2,r4,r2, lsl #0x2
  add.w r3,r3,#0x1b4
  ldr r1,[r2,#0x4]
  ldr.w r3,[r4,r3,lsl #0x2]
  add r3,r1
  adds r1,#0x10
  strh r5,[r3,#0x8]
  strh r6,[r3,#0xa]
  strh r7,[r3,#0xc]
  strh.w r8,[r3,#0xe]
  str r1,[r2,#0x4]
  pop.w {r4,r5,r6,r7,r8,pc}
  mov r0,r4
  bl 0x1010b660
  cmp r0,#0x0
  bne 0x1010b7be
  mov r1,r0
  mov r0,r4
  bl 0x1010b62c
  cmp r0,#0x0
  beq 0x1010b766
  b 0x1010b7be
  movs r0,#0x3
  b 0x1010b7be
