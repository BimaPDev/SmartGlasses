; FUN_14031418 @ 0x14031418 size=232
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  movs r0,#0x0
  mov.w r10,#0x1f
  ldr r3,[0x14031500]
  ldr.w r8,[0x14031510]
  ldr.w r11,[r3,#0x0]
  ldr.w r3,[r8,#0x0]
  ldr.w r9,[0x14031514]
  ldr r5,[0x14031504]
  ldr r4,[0x14031508]
  sub sp,#0x14
  sub.w r6,r11,#0x2
  sub.w lr,r3,#0x2
  umull r2,r3,r9,r0
  lsrs r3,r3,#0x2
  ldr.w r1,[r5,r3,lsl #0x2]
  add.w r2,r3,r3, lsl #0x1
  str r1,[sp,#0x0]
  sub.w r2,r0,r2, lsl #0x1
  ldr r1,[sp,#0x0]
  add.w r2,r2,r2, lsl #0x2
  lsl.w r7,r10,r2
  bic.w r1,r1,r7
  str r1,[sp,#0x0]
  ldrsh.w r1,[r6,#0x2]!
  ldr.w r12,[sp,#0x0]
  lsls r1,r2
  orr.w r1,r1,r12
  str r1,[sp,#0x0]
  ldr r1,[sp,#0x0]
  adds r0,#0x1
  str.w r1,[r5,r3,lsl #0x2]
  ldr.w r1,[r4,r3,lsl #0x2]
  cmp r0,#0x1e
  str r1,[sp,#0x4]
  ldr r1,[sp,#0x4]
  bic.w r7,r1,r7
  str r7,[sp,#0x4]
  ldrsh.w r1,[lr,#0x2]!
  ldr r7,[sp,#0x4]
  lsl.w r2,r1,r2
  orr.w r2,r2,r7
  str r2,[sp,#0x4]
  ldr r2,[sp,#0x4]
  str.w r2,[r4,r3,lsl #0x2]
  bne 0x14031442
  ldr r3,[0x1403150c]
  ldrsh.w r2,[r11,#0x3c]
  ldr.w r1,[r3,#0xa8]
  str r1,[sp,#0x8]
  ldr r1,[sp,#0x8]
  bic r1,r1,#0x1f
  str r1,[sp,#0x8]
  ldr r1,[sp,#0x8]
  orrs r2,r1
  str r2,[sp,#0x8]
  ldr r2,[sp,#0x8]
  str.w r2,[r3,#0xa8]
  ldr.w r1,[r3,#0xa8]
  ldr.w r2,[r8,#0x0]
  str r1,[sp,#0xc]
  ldr r1,[sp,#0xc]
  ldrsh.w r0,[r2,#0x3c]
  bic r1,r1,#0x3e0
  str r1,[sp,#0xc]
  ldr r2,[sp,#0xc]
  orr.w r2,r2,r0, lsl #0x5
  str r2,[sp,#0xc]
  ldr r2,[sp,#0xc]
  str.w r2,[r3,#0xa8]
  ldr r3,[0x14031500]
  ldr r0,[r3,#0x0]
  bl 0x140db700
  ldr.w r0,[r8,#0x0]
  add sp,#0x14
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  b.w 0x140db700
