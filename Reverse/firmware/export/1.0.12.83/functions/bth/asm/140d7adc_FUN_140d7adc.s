; FUN_140d7adc @ 0x140d7adc size=264
  push {r0,r1,r2,r4,r5,r6,r7,r8,r9,r10,r11,lr}
  ldr r5,[sp,#0x30]
  mov r4,r2
  mov r8,r0
  mov r9,r1
  mov r2,r5
  mov r7,r3
  mov r1,r4
  ldr r3,[0x140d7be4]
  bl 0x140d77f0
  mov r2,r8
  ldr.w r3,[r8,#0x4]
  sub.w r11,r5,r4
  ldr.w r6,[r2],#0x8
  add.w r10,r3,r11
  cmp r6,r2
  ite ne
  ldr.ne.w r2,[r8,#0x8]
  mov.eq r2,#0x3
  cmp r2,r10
  bcc 0x140d7bcc
  add.w r6,r6,r9, lsl #0x2
  add r9,r4
  mov r1,r7
  mov r0,r8
  sub.w r9,r3,r9
  bl 0x140d7808
  cbz r0,0x140d7b4e
  cmp.w r9,#0x0
  beq 0x140d7b40
  cmp r4,r5
  beq 0x140d7b40
  mov r2,r9
  add.w r1,r6,r4, lsl #0x2
  add.w r0,r6,r5, lsl #0x2
  bl 0x140d783a
  cbz r5,0x140d7b94
  mov r2,r5
  mov r1,r7
  mov r0,r6
  bl 0x140d7822
  b 0x140d7b94
  cbz r5,0x140d7b5e
  cmp r4,r5
  bcc 0x140d7bdc
  mov r2,r5
  mov r1,r7
  mov r0,r6
  bl 0x140d783a
  cmp.w r9,#0x0
  beq 0x140d7b94
  cmp r4,r5
  beq 0x140d7b94
  mov r2,r9
  add.w r1,r6,r4, lsl #0x2
  add.w r0,r6,r5, lsl #0x2
  bl 0x140d783a
  cmp r4,r5
  bcs 0x140d7b94
  add.w r4,r6,r4, lsl #0x2
  add.w r3,r7,r5, lsl #0x2
  lsl.w r9,r5,#0x2
  cmp r4,r3
  bcc 0x140d7ba4
  mov r2,r5
  mov r1,r7
  mov r0,r6
  bl 0x140d783a
  mov r0,r8
  mov r1,r10
  bl 0x140d7770
  mov r0,r8
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  cmp r4,r7
  bhi 0x140d7bb0
  mov r2,r5
  add.w r1,r7,r11, lsl #0x2
  b 0x140d7b46
  subs r4,r4,r7
  mov r1,r7
  mov r0,r6
  asr.w r11,r4, asr #0x2
  mov r2,r11
  bl 0x140d783a
  sub.w r2,r5,r11
  add.w r1,r6,r9
  adds r0,r6,r4
  b 0x140d7b48
  mov r3,r7
  mov r2,r4
  mov r1,r9
  mov r0,r8
  str r5,[sp,#0x0]
  bl 0x140d78be
  b 0x140d7b94
  cmp.w r9,#0x0
  beq 0x140d7b7a
  b 0x140d7b68
