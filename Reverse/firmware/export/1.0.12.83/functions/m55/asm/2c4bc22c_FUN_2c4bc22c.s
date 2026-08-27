; FUN_2c4bc22c @ 0x2c4bc22c size=216
  push {r4,r5,r6,lr}
  rsb r3,r0,r0, lsl #0x3
  ldr r4,[0x2c4bc304]
  add.w lr,r4,r3, lsl #0x4
  ldrb.w r1,[lr,#0xf]
  cmp r1,#0x0
  beq 0x2c4bc2ba
  ldrb.w r12,[lr,#0xe]
  mov r2,r0
  cmp.w r12,#0x1
  bhi 0x2c4bc2fa
  add.w r1,r12,r12, lsl #0x1
  lsls r3,r3,#0x4
  lsls r5,r0,#0x3
  add.w r3,r3,r1, lsl #0x4
  ldr r1,[0x2c4bc308]
  add.w r0,r0,r0, lsl #0x1
  add r3,r4
  lsl.w r6,r12,#0x1
  ldr.w r1,[r1,r0,lsl #0x2]
  ldr r0,[r3,#0x10]
  ldrb.w r3,[r3,#0x2c]
  cbz r0,0x2c4bc2aa
  movs r0,#0x2
  str r0,[r1,#0x3c]
  cmp r3,#0x2
  bne 0x2c4bc27c
  movs r3,#0x5
  str r3,[r1,#0x38]
  movw r3,#0xaff
  str r3,[r1,#0x30]
  ldr.w r3,[r1,#0x9c]
  lsls r3,r3,#0x1f
  bmi 0x2c4bc2a8
  ldr r3,[r1,#0x0]
  subs r2,r5,r2
  orr r3,r3,#0x20
  str r3,[r1,#0x0]
  add.w r3,r4,r2, lsl #0x4
  lsls r2,r2,#0x4
  ldrb r3,[r3,#0x1]
  lsls r0,r3,#0x1d
  bmi 0x2c4bc2d4
  ldr r3,[r1,#0x6c]
  orr r3,r3,#0x1
  str r3,[r1,#0x6c]
  pop {r4,r5,r6,pc}
  ldrb.w r0,[lr,#0x1]
  lsls r0,r0,#0x1d
  bpl 0x2c4bc274
  mov r1,r2
  ldr r0,[0x2c4bc30c]
  bl 0x2c673ca8
  ldrb.w r2,[lr,#0xd]
  movs r3,#0x1
  strb.w r1,[lr,#0xf]
  strb.w r2,[lr,#0xe]
  strb.w r3,[lr,#0xc]
  pop.w {r4,r5,r6,lr}
  b.w 0x2c4bbfe4
  add r12,r6
  ldr r3,[r1,#0x4]
  add.w r2,r2,r12, lsl #0x4
  add r4,r2
  ldr r2,[0x2c4bc310]
  ldrh r0,[r4,#0x26]
  ands r2,r3
  ubfx r3,r0,#0x0,#0xa
  orrs r3,r2
  lsls r2,r0,#0x10
  ite mi
  orr.mi r3,r3,#0x1000
  bic.pl r3,r3,#0x1000
  str r3,[r1,#0x4]
  b 0x2c4bc2a0
  mov r3,r12
  ldr r1,[0x2c4bc314]
  ldr r0,[0x2c4bc318]
  bl 0x2c673ca8
