; FUN_2c4bbb80 @ 0x2c4bbb80 size=256
  push {r4,r5,r6,r7,r8,r9,r10,lr}
  rsb r3,r0,r0, lsl #0x3
  ldr.w r8,[0x2c4bbe80]
  ldr r2,[0x2c4bbe2c]
  add.w r1,r0,r0, lsl #0x1
  sub sp,#0x10
  mov r5,r0
  ldr.w r9,[r2,r1,lsl #0x2]
  add.w r2,r8,r3, lsl #0x4
  lsls r7,r0,#0x3
  ldrb r4,[r2,#0xe]
  add.w r6,r4,r4, lsl #0x1
  lsl.w r10,r4,#0x1
  lsls r6,r6,#0x4
  add.w r6,r6,r3, lsl #0x4
  add r6,r8
  ldr r3,[r6,#0x38]
  cmp r3,#0x0
  bne 0x2c4bbc54
  ldrb.w r3,[r6,#0x24]
  cbz r3,0x2c4bbbd4
  movs r3,#0x0
  str.w r3,[r9,#0x30]
  ldr.w r3,[r9,#0x40]
  ldr.w r3,[r9,#0x6c]
  bic r3,r3,#0x1
  str.w r3,[r9,#0x6c]
  subs r3,r7,r5
  add.w r2,r8,r3, lsl #0x4
  lsls r1,r3,#0x4
  ldrb r3,[r2,#0x1]
  lsls r3,r3,#0x1f
  bpl 0x2c4bbc14
  adds r3,r4,#0x1
  add.w r3,r3,r3, lsl #0x1
  add.w r4,r1,r3, lsl #0x4
  movs r3,#0x1
  strb.w r3,[r8,r4]
  subs r3,r7,r5
  add.w r3,r8,r3, lsl #0x4
  ldrb r1,[r3,#0xf]
  cmp r1,#0x0
  beq.w 0x2c4bbeb4
  ldrb r2,[r3,#0xe]
  subs r1,#0x1
  adds r2,#0x1
  strb r1,[r3,#0xf]
  and r2,r2,#0x1
  strb r2,[r3,#0xe]
  add sp,#0x10
  pop.w {r4,r5,r6,r7,r8,r9,r10,pc}
  add.w r2,r10,r4
  add.w r2,r1,r2, lsl #0x4
  add r2,r8
  ldr r6,[r2,#0x3c]
  cmp r6,#0x0
  beq.w 0x2c4bbeac
  adds r4,#0x1
  ldrh r3,[r2,#0x1c]
  ldrh r0,[r2,#0x1a]
  add.w r4,r4,r4, lsl #0x1
  mul r0,r3,r0
  add.w r4,r1,r4, lsl #0x4
  add r4,r8
  ldr r1,[r4,#0x4]
  str r0,[sp,#0x4]
  ldrh r0,[r2,#0x18]
  mul r3,r0,r3
  ldr r0,[r2,#0x38]
  str r0,[sp,#0x8]
  ldr r0,[r2,#0x14]
  str r0,[sp,#0x0]
  mov r0,r5
  ldr r2,[r2,#0x10]
  blx r6
  b 0x2c4bbbf2
  strd r0,r3,[sp,#0x8]
  ldr r3,[0x2c4bbe30]
  movw r1,#0x3c9
  ldr r2,[0x2c4bbe34]
  movs r0,#0x4
  str r3,[sp,#0x4]
  ldr r3,[0x2c4bbe38]
  str r3,[sp,#0x0]
  ldr r3,[0x2c4bbe3c]
  bl 0x2c673d88
  mov r1,r5
  ldr r0,[0x2c4bbed0]
  bl 0x2c673ca8
  mov r2,r5
  ldr r1,[0x2c4bbed4]
  ldr r0,[0x2c4bbed8]
  bl 0x2c673ca8
