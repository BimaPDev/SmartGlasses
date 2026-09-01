; FUN_1012f214 @ 0x1012f214 size=160
  mov r12,r3
  ldr r3,[r0,#0x8]
  push {r4,r5,r6,r7,r8,lr}
  cbz r3,0x1012f252
  ldrd r5,r4,[r0,#0xc]
  movs r3,#0x0
  cmp r3,r12
  blt 0x1012f22c
  str r4,[r0,#0x10]
  b 0x1012f252
  ldr r6,[sp,#0x18]
  cmp r6,#0x1
  bne 0x1012f256
  ldrsh.w r6,[r1,r3,lsl #0x1]
  smull r7,r8,r6,r4
  lsrs r6,r7,#0x1b
  orr.w r6,r6,r8, lsl #0x5
  strh.w r6,[r1,r3,lsl #0x1]
  ldr r6,[r0,#0x8]
  add r4,r5
  subs r6,#0x1
  str r6,[r0,#0x8]
  cbnz r6,0x1012f2b0
  strh r6,[r0,#0x0]
  str r6,[r0,#0x10]
  pop.w {r4,r5,r6,r7,r8,pc}
  ldrsh.w r6,[r0,#0x4]
  cbnz r6,0x1012f282
  ldrsh.w r6,[r1,r3,lsl #0x1]
  smull r7,r8,r6,r4
  lsrs r6,r7,#0x1b
  orr.w r6,r6,r8, lsl #0x5
  strh.w r6,[r1,r3,lsl #0x1]
  ldrsh.w r6,[r2,r3,lsl #0x1]
  smull r7,r8,r6,r4
  lsrs r6,r7,#0x1b
  orr.w r6,r6,r8, lsl #0x5
  strh.w r6,[r2,r3,lsl #0x1]
  b 0x1012f244
  ldrsh.w r6,[r1,r3,lsl #0x2]
  lsl.w lr,r3,#0x2
  smull r7,r8,r6,r4
  lsrs r6,r7,#0x1b
  orr.w r6,r6,r8, lsl #0x5
  strh.w r6,[r1,r3,lsl #0x2]
  add.w lr,lr,#0x2
  ldrsh.w r6,[r1,lr]
  smull r7,r8,r6,r4
  lsrs r6,r7,#0x1b
  orr.w r6,r6,r8, lsl #0x5
  strh.w r6,[r1,lr]
  b 0x1012f244
  adds r3,#0x1
  b 0x1012f224
