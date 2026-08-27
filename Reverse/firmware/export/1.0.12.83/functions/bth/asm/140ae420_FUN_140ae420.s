; FUN_140ae420 @ 0x140ae420 size=132
  push {r4,lr}
  ldr r2,[r1,#0x4]
  bic r2,r2,#0x3
  cmp r2,#0x7f
  bhi 0x140ae478
  movs r3,#0x0
  asrs r2,r2,#0x2
  add.w r12,r2,r3, lsl #0x5
  add.w r12,r0,r12, lsl #0x2
  ldr.w r4,[r12,#0x48]
  cbz r4,0x140ae48c
  strd r4,r0,[r1,#0x8]
  str r1,[r4,#0xc]
  add.w r4,r1,#0xb
  bic r4,r4,#0x3
  add.w lr,r1,#0x8
  cmp lr,r4
  bne 0x140ae498
  str.w r1,[r12,#0x48]
  movs r1,#0x1
  ldr r4,[r0,#0x10]
  add.w r12,r0,r3, lsl #0x2
  lsl.w r3,r1,r3
  orrs r3,r4
  str r3,[r0,#0x10]
  lsl.w r2,r1,r2
  ldr.w r1,[r12,#0x14]
  orrs r2,r1
  str.w r2,[r12,#0x14]
  pop {r4,pc}
  clz r3,r2
  rsb.w r4,r3,#0x1a
  lsrs r2,r4
  eor r2,r2,#0x20
  rsb.w r3,r3,#0x19
  b 0x140ae430
  movw r2,#0x27e
  ldr r1,[0x140ae4a4]
  ldr r0,[0x140ae4a8]
  bl 0x1402b0f8
  mov.w r2,#0x284
  ldr r1,[0x140ae4a4]
  ldr r0,[0x140ae4a8]
  bl 0x1402b0f8
