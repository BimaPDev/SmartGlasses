; FUN_2c472e28 @ 0x2c472e28 size=126
  push {r4,lr}
  ldr r3,[r1,#0x4]
  bic r3,r3,#0x3
  cmp r3,#0x7f
  bhi 0x2c472e7a
  asrs r3,r3,#0x2
  mov.w r12,#0x0
  add.w r2,r3,r12, lsl #0x5
  add.w r2,r0,r2, lsl #0x2
  ldr r4,[r2,#0x60]
  cbz r4,0x2c472e8e
  add.w lr,r1,#0x8
  strd r4,r0,[r1,#0x8]
  str r1,[r4,#0xc]
  add.w r4,r1,#0xb
  bic r4,r4,#0x3
  cmp lr,r4
  bne 0x2c472e9a
  str r1,[r2,#0x60]
  movs r2,#0x1
  add.w r1,r0,r12, lsl #0x2
  lsl.w r4,r2,r12
  lsl.w r3,r2,r3
  ldr r2,[r0,#0x10]
  orrs r2,r4
  str r2,[r0,#0x10]
  ldr r2,[r1,#0x14]
  orrs r3,r2
  str r3,[r1,#0x14]
  pop {r4,pc}
  clz r12,r3
  rsb.w r2,r12,#0x1a
  rsb.w r12,r12,#0x19
  lsrs r3,r2
  eor r3,r3,#0x20
  b 0x2c472e3a
  movw r2,#0x27e
  ldr r1,[0x2c472ea8]
  ldr r0,[0x2c472eac]
  bl 0x2c673ca8
  mov.w r2,#0x284
  ldr r1,[0x2c472ea8]
  ldr r0,[0x2c472eac]
  bl 0x2c673ca8
