; FUN_1013b122 @ 0x1013b122 size=198
  push {r4,r5,r6,r7,r8,lr}
  mov r4,r0
  mov r8,r1
  mov r7,r2
  mov r5,r3
  bl 0x1013b026
  cmp r0,#0x0
  beq 0x1013b1e4
  adds r3,r2,#0x2
  bic r2,r3,#0x1
  ldr.w r3,[r4,#0x6e4]
  lsls r6,r2,#0x2
  add.w r3,r4,r3, lsl #0x2
  ldr.w r3,[r3,#0x6dc]
  add.w r3,r3,r2, lsl #0x2
  ldr.w r2,[r4,#0x6d8]
  adds r3,#0x8
  cmp r3,r2
  bcs 0x1013b1bc
  ldr.w r3,[r4,#0x6e4]
  orr.w r1,r8,r7, lsl #0x10
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r3,#0x6d0]
  ldr.w r3,[r3,#0x6dc]
  orr r1,r1,#0x30000000
  str r1,[r2,r3]
  add.w lr,r5,r7, lsl #0x2
  mov r3,r5
  lsl.w r12,r7,#0x2
  rsb.w r5,r5,#0x4
  ldr.w r2,[r4,#0x6e4]
  cmp r3,lr
  add.w r0,r4,r2, lsl #0x2
  ldr.w r1,[r0,#0x6dc]
  bne 0x1013b1d4
  lsls r3,r7,#0x1f
  bmi 0x1013b1a6
  add.w r2,r2,#0x1b4
  ldr.w r3,[r4,r2,lsl #0x2]
  mov.w r2,#0x80000000
  add r3,r1
  add r3,r12
  str r2,[r3,#0x4]
  ldr.w r0,[r4,#0x6e4]
  add.w r4,r4,r0, lsl #0x2
  ldr.w r3,[r4,#0x6dc]
  movs r0,#0x0
  add r6,r3
  str.w r6,[r4,#0x6dc]
  b 0x1013b1d0
  mov r0,r4
  bl 0x1010b660
  cbnz r0,0x1013b1d0
  mov r1,r0
  mov r0,r4
  bl 0x1010b62c
  cmp r0,#0x0
  beq 0x1013b158
  pop.w {r4,r5,r6,r7,r8,pc}
  adds r2,r5,r3
  add r2,r1
  ldr.w r1,[r0,#0x6d0]
  ldr.w r0,[r3],#0x4
  str r0,[r1,r2]
  b 0x1013b180
  movs r0,#0x3
  b 0x1013b1d0
