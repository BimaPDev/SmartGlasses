; FUN_140ae280 @ 0x140ae280 size=174
  cmp r1,#0x0
  beq 0x140ae32c
  push {r4,r5,r6,r7,r8,lr}
  ldr r6,[0x140ae330]
  sub sp,#0x18
  ldr r3,[r6,#0x0]
  cmp r3,#0x0
  beq 0x140ae310
  mov r5,r1
  mov r4,r0
  ldr.w r8,[0x140ae354]
  mov.w r1,#0xffffffff
  ldr.w r0,[r8,#0x0]
  bl 0x140e5148
  ldr r0,[r6,#0x0]
  mov r1,r5
  bl 0x140ae8f8
  ldr r6,[0x140ae334]
  add.w r3,r4,r4, lsl #0x1
  add.w r3,r6,r3, lsl #0x2
  ldr r2,[r3,#0x1c]
  lsls r7,r4,#0x1
  cmp r0,r2
  bls 0x140ae30a
  cmp r4,#0xb
  itet ls
  ldr.ls r3,[0x140ae338]
  ldr.hi r3,[0x140ae33c]
  ldr.ls.w r3,[r3,r4,lsl #0x2]
  strd r5,r2,[sp,#0x4]
  strd r0,r3,[sp,#0xc]
  ldr r3,[0x140ae340]
  ldr r2,[0x140ae344]
  str r3,[sp,#0x0]
  mov.w r1,#0x334
  ldr r3,[0x140ae348]
  movs r0,#0x4
  bl 0x1402a6e8
  movs r2,#0x0
  adds r3,r7,r4
  add.w r3,r6,r3, lsl #0x2
  str r2,[r3,#0x1c]
  add r4,r7
  add.w r6,r6,r4, lsl #0x2
  ldr r3,[r6,#0x20]
  ldr.w r0,[r8,#0x0]
  subs r3,#0x1
  str r3,[r6,#0x20]
  add sp,#0x18
  pop.w {r4,r5,r6,r7,r8,lr}
  b.w 0x140e52d8
  subs r0,r2,r0
  str r0,[r3,#0x1c]
  b 0x140ae2f0
  ldr r4,[0x140ae34c]
  ldr r0,[0x140ae350]
  movw r1,#0x226
  strd r0,r4,[sp,#0x0]
  ldr r3,[0x140ae348]
  ldr r2,[0x140ae344]
  movs r0,#0x4
  bl 0x1402a6e8
  add sp,#0x18
  pop.w {r4,r5,r6,r7,r8,pc}
  bx lr
