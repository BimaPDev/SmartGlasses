; FUN_2c4bc8d0 @ 0x2c4bc8d0 size=218
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  lsls r3,r0,#0x3
  sub sp,#0x1c
  rsb r10,r0,r0, lsl #0x3
  ldr.w r11,[0x2c4bc9b0]
  str r3,[sp,#0x10]
  mov r5,r0
  add.w r3,r11,r10, lsl #0x4
  lsl.w r2,r10,#0x4
  str r2,[sp,#0xc]
  ldrb r0,[r3,#0x1]
  ands r0,r0,#0x1
  beq 0x2c4bc9a4
  adds r3,r1,#0x1
  mov r8,r1
  mov.w r10,#0x7d0
  lsls r7,r1,#0x1
  add.w r6,r3,r3, lsl #0x1
  str r3,[sp,#0x14]
  str.w lr,[sp,#0x4]
  add.w r6,r2,r6, lsl #0x4
  add r6,r11
  b 0x2c4bc916
  bl 0x2c6444fc
  mrs r3,basepri
  cmp r3,#0x40
  beq 0x2c4bc928
  mov r0,pc
  ldr r1,[0x2c4bc9ac]
  ldr r2,[sp,#0x4]
  str r0,[r1,#0x0]
  str r2,[r1,#0x4]
  movs r1,#0x40
  msr basepri,r1
  ldrb r0,[r6,#0x0]
  clz r4,r10
  cmp r0,#0x2
  uxtb.w r9,r0
  lsr.w r4,r4,#0x5
  bne 0x2c4bc964
  add.w r0,r7,r8
  cbz r4,0x2c4bc964
  str r3,[sp,#0x8]
  mov.w r2,#0x10000000
  ldr r3,[sp,#0xc]
  add.w r0,r3,r0, lsl #0x4
  add r0,r11
  str r2,[r0,#0x38]
  mov r0,r5
  bl 0x2c4bbb80
  mov r0,r5
  bl 0x2c4bc22c
  ldr r3,[sp,#0x8]
  ldr r0,[0x2c4bc9ac]
  mov.w r2,#0xffffffff
  cbnz r3,0x2c4bc96e
  str r2,[r0,#0x0]
  msr basepri,r3
  cmp.w r9,#0x2
  mov.w r0,#0x1
  add.w r10,r10,#0xffffffff
  bne 0x2c4bc984
  cmp r4,#0x0
  beq 0x2c4bc912
  ldr r3,[sp,#0x10]
  add r7,r8
  movs r2,#0x0
  subs r5,r3,r5
  ldr r3,[sp,#0x14]
  lsls r5,r5,#0x4
  add.w r3,r3,r3, lsl #0x1
  add.w r7,r5,r7, lsl #0x4
  add.w r5,r5,r3, lsl #0x4
  add r7,r11
  strb.w r2,[r11,r5]
  ldr r0,[r7,#0x38]
  add sp,#0x1c
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
