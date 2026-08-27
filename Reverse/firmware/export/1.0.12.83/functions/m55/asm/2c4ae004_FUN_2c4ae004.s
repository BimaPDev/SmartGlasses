; FUN_2c4ae004 @ 0x2c4ae004 size=308
  push {r4,r5,r6,r7,r8,r9,lr}
  ldr r5,[0x2c4ae138]
  sub sp,#0x1c
  ldr r4,[0x2c4ae13c]
  ldr r5,[r5,#0x0]
  str r5,[sp,#0x14]
  mov.w r5,#0x0
  ldr.w r5,[r4,#0x6bc]
  cmp r5,#0x1
  bhi 0x2c4ae0dc
  mov r6,r3
  add.w r3,r5,#0x1aa
  ldr.w r3,[r4,r3,lsl #0x2]
  cmp r3,#0x0
  beq 0x2c4ae0dc
  add.w r5,r4,r5, lsl #0x2
  mov r7,r2
  mov r8,r0
  mov r9,r1
  ldr.w r2,[r5,#0x6b4]
  ldr.w r1,[r4,#0x6b0]
  add.w r0,r2,#0x10
  cmp r0,r1
  bcs 0x2c4ae0f4
  ldr r1,[0x2c4ae140]
  movs r5,#0x0
  str r1,[r3,r2]
  ldr.w r3,[r4,#0x6bc]
  add.w r2,r3,#0x1aa
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r4,r2,lsl #0x2]
  ldr.w r3,[r3,#0x6b4]
  add r3,r2
  str r5,[r3,#0x4]
  ldr.w r3,[r4,#0x6bc]
  add.w r2,r3,#0x1aa
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r4,r2,lsl #0x2]
  ldr.w r3,[r3,#0x6b4]
  add r3,r2
  strh.w r8,[r3,#0x8]
  ldr.w r3,[r4,#0x6bc]
  add.w r2,r3,#0x1aa
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r4,r2,lsl #0x2]
  ldr.w r3,[r3,#0x6b4]
  add r3,r2
  strh.w r9,[r3,#0xa]
  ldr.w r3,[r4,#0x6bc]
  add.w r2,r3,#0x1aa
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r4,r2,lsl #0x2]
  ldr.w r3,[r3,#0x6b4]
  add r3,r2
  strh r7,[r3,#0xc]
  ldr.w r3,[r4,#0x6bc]
  add.w r2,r3,#0x1aa
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r4,r2,lsl #0x2]
  ldr.w r3,[r3,#0x6b4]
  add r3,r2
  strh r6,[r3,#0xe]
  ldr.w r3,[r4,#0x6bc]
  add.w r3,r3,#0x1ac
  add.w r4,r4,r3, lsl #0x2
  ldr r3,[r4,#0x4]
  adds r3,#0x10
  str r3,[r4,#0x4]
  b 0x2c4ae0de
  movs r5,#0x3
  ldr r3,[0x2c4ae138]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x14]
  eors r2,r3
  mov.w r3,#0x0
  bne 0x2c4ae134
  mov r0,r5
  add sp,#0x1c
  pop.w {r4,r5,r6,r7,r8,r9,pc}
  mov r0,r4
  bl 0x2c4adb40
  mov r5,r0
  cmp r0,#0x0
  bne 0x2c4ae0de
  mov.w r3,#0xffffffff
  str r0,[sp,#0x10]
  add r1,sp,#0x4
  movs r0,#0x5
  str r4,[sp,#0x4]
  strd r3,r3,[sp,#0x8]
  bl 0x2c4b4674
  mov r5,r0
  cmp r0,#0x0
  bne 0x2c4ae0de
  ldr.w r3,[r4,#0x6bc]
  ldr r2,[0x2c4ae144]
  add.w r1,r3,#0x1aa
  str r0,[r2,#0x0]
  add.w r2,r4,r3, lsl #0x2
  ldr.w r3,[r4,r1,lsl #0x2]
  ldr.w r2,[r2,#0x6b4]
  b 0x2c4ae046
  bl 0x2c674828
