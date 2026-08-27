; FUN_140e2780 @ 0x140e2780 size=290
  push {r0,r1,r2,r4,r5,r6,r7,r8,r9,r10,r11,lr}
  ldr r3,[r0,#0x10]
  mov r7,r0
  ldr r4,[r1,#0x10]
  cmp r3,r4
  blt.w 0x140e289e
  subs r4,#0x1
  add.w r5,r0,#0x14
  add.w r8,r1,#0x14
  add.w r3,r5,r4, lsl #0x2
  ldr.w r2,[r5,r4,lsl #0x2]
  lsl.w r11,r4,#0x2
  str r3,[sp,#0x4]
  add.w r9,r8,r4, lsl #0x2
  ldr.w r3,[r8,r4,lsl #0x2]
  adds r3,#0x1
  cmp r2,r3
  udiv r6,r2,r3
  bcc 0x140e2826
  mov.w lr,#0x0
  mov r0,r8
  mov r12,r5
  mov r10,lr
  ldr.w r2,[r0],#0x4
  uxth r3,r2
  cmp r9,r0
  lsr.w r2,r2,#0x10
  mla r3,r6,r3,lr
  lsr.w lr,r3,#0x10
  uxth r3,r3
  mla r2,r6,r2,lr
  sub.w r3,r10,r3
  ldr.w r10,[r12,#0x0]
  lsr.w lr,r2,#0x10
  uxth.w r10,r10
  uxth r2,r2
  add r3,r10
  str r3,[sp,#0x0]
  ldr.w r3,[r12,#0x0]
  rsb r2,r2,r3, lsr #0x10
  ldr r3,[sp,#0x0]
  add.w r2,r2,r3, asr #0x10
  ldrh.w r3,[sp,#0x0]
  orr.w r3,r3,r2, lsl #0x10
  asr.w r10,r2, asr #0x10
  str.w r3,[r12],#0x4
  bcs 0x140e27c4
  ldr.w r3,[r5,r11]
  cbnz r3,0x140e2826
  ldr r3,[sp,#0x4]
  subs r3,#0x4
  cmp r5,r3
  mov r2,r3
  bcc 0x140e2886
  str r4,[r7,#0x10]
  mov r0,r7
  bl 0x140e0b7c
  cmp r0,#0x0
  blt 0x140e287e
  adds r6,#0x1
  mov r0,r5
  mov.w r12,#0x0
  ldr.w r1,[r8],#0x4
  ldr.w lr,[r0,#0x0]
  uxth r3,r1
  cmp r9,r8
  uxth.w r2,lr
  sub.w r3,r12,r3
  add r3,r2
  lsr.w r2,r1,#0x10
  rsb r2,r2,lr, lsr #0x10
  add.w r2,r2,r3, asr #0x10
  uxth r3,r3
  asr.w r12,r2, asr #0x10
  orr.w r3,r3,r2, lsl #0x10
  str.w r3,[r0],#0x4
  bcs 0x140e2838
  ldr.w r2,[r5,r4,lsl #0x2]
  add.w r3,r5,r4, lsl #0x2
  cbnz r2,0x140e287e
  subs r3,#0x4
  cmp r5,r3
  mov r2,r3
  bcc 0x140e2892
  str r4,[r7,#0x10]
  mov r0,r6
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  ldr r2,[r2,#0x0]
  subs r3,#0x4
  cmp r2,#0x0
  bne 0x140e2824
  subs r4,#0x1
  b 0x140e281e
  ldr r2,[r2,#0x0]
  subs r3,#0x4
  cmp r2,#0x0
  bne 0x140e287c
  subs r4,#0x1
  b 0x140e2876
  movs r0,#0x0
  b 0x140e2880
