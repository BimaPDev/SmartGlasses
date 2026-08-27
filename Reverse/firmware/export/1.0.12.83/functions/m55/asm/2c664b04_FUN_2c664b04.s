; FUN_2c664b04 @ 0x2c664b04 size=122
  push {r0,r1,r4,r5,r6,r7,r8,lr}
  mov r6,r2
  mov r5,r3
  mov r4,r0
  ldr r3,[0x2c664b80]
  mov r2,r5
  mov r7,r1
  mov r1,r6
  sub.w r8,r5,r6
  bl 0x2c6648d0
  mov r3,r4
  ldr r2,[r4,#0x4]
  ldr.w r0,[r3],#0x8
  add r8,r2
  cmp r0,r3
  ite ne
  ldr.ne r3,[r4,#0x8]
  mov.eq r3,#0x3
  cmp r3,r8
  bcc 0x2c664b6e
  adds r3,r6,r7
  subs r2,r2,r3
  beq 0x2c664b4e
  cmp r6,r5
  beq 0x2c664b4e
  add.w r0,r0,r7, lsl #0x2
  add.w r1,r0,r6, lsl #0x2
  add.w r0,r0,r5, lsl #0x2
  bl 0x2c66491a
  cbz r5,0x2c664b5e
  ldr r0,[r4,#0x0]
  mov r1,r5
  ldr r2,[sp,#0x20]
  add.w r0,r0,r7, lsl #0x2
  bl 0x2c664932
  mov r0,r4
  mov r1,r8
  bl 0x2c664850
  mov r0,r4
  add sp,#0x8
  pop.w {r4,r5,r6,r7,r8,pc}
  movs r3,#0x0
  mov r2,r6
  mov r1,r7
  mov r0,r4
  str r5,[sp,#0x0]
  bl 0x2c66499e
  b 0x2c664b4e
