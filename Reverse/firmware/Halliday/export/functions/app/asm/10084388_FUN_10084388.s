; FUN_10084388 @ 0x10084388 size=122
  push {r4,r5,r6,r7,lr}
  ldr r4,[0x10084404]
  movs r3,#0x0
  mov r2,r4
  ldr r7,[r0,#0x0]
  ldr r5,[r4,#0x0]
  cmp r5,r7
  bne 0x100843a8
  ldr r6,[r4,#0x4]
  ldr r5,[r0,#0x8]
  cmp r6,r5
  bne 0x100843a8
  ldr r6,[r4,#0x8]
  ldr r5,[r0,#0x30]
  cmp r6,r5
  beq 0x100843ee
  adds r3,#0x1
  cmp r3,#0x10
  add.w r4,r4,#0x10
  bne 0x10084392
  movs r4,#0x0
  lsls r3,r4,#0x4
  ldr r6,[r2,r3]
  mov r3,r4
  adds r4,#0x1
  cbnz r6,0x100843e6
  lsls r5,r3,#0x4
  str r7,[r2,r5]
  ldr r5,[r0,#0x8]
  ldr r0,[r0,#0x30]
  add.w r4,r2,r3, lsl #0x4
  str r5,[r4,#0x4]
  str r0,[r4,#0x8]
  strh r6,[r4,#0xc]
  cbnz r1,0x100843fc
  add.w r1,r2,r3, lsl #0x4
  ldrh r1,[r1,#0xc]
  adds r1,#0x1
  uxth r1,r1
  add.w r2,r2,r3, lsl #0x4
  strh r1,[r2,#0xc]
  adds r0,r3,#0x1
  pop {r4,r5,r6,r7,pc}
  cmp r4,#0x10
  bne 0x100843b4
  movs r0,#0x0
  b 0x100843e4
  cmp r1,#0x0
  beq 0x100843d2
  add.w r1,r2,r3, lsl #0x4
  ldrh r1,[r1,#0xc]
  cmp r1,#0x0
  bne 0x100843ea
  mov.w r1,#0x100
  b 0x100843dc
