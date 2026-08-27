; FUN_2c4cca08 @ 0x2c4cca08 size=114
  push {r4,r5,r6,r7,lr}
  mov r6,r2
  ldr r2,[0x2c4cca7c]
  sub sp,#0x14
  mov r5,r3
  tst r6,r2
  mov r7,r1
  ldr r3,[sp,#0x28]
  beq 0x2c4cca4e
  add.w r4,r0,r3, lsl #0x2
  ldr r4,[r4,#0x0]
  ubfx r5,r5,#0x7,#0x1
  mov r3,r7
  ldr.w r0,[r4,#0xc0]
  ldr.w r2,[r4,#0x94]
  add.w r0,r0,#0x300
  strd r5,r6,[sp,#0x8]
  ldrb.w r1,[r4,#0xb4]
  str r1,[sp,#0x4]
  add.w r1,r4,#0xa8
  ldr.w r5,[r4,#0xb8]
  str r5,[sp,#0x0]
  bl 0x2c4ce9e4
  add sp,#0x14
  pop {r4,r5,r6,r7,pc}
  ldr.w r12,[r0,r3,lsl #0x2]
  add.w r4,r0,r3, lsl #0x2
  ldr.w r2,[r12,#0x94]
  mov r0,r12
  str r3,[sp,#0xc]
  ldr.w r3,[r12,#0xb8]
  strd r1,r3,[sp,#0x4]
  ldr.w r3,[r12,#0xc0]
  add.w r1,r12,#0xa8
  str r3,[sp,#0x0]
  add.w r3,r12,#0x98
  bl 0x2c4d0e54
  b 0x2c4cca1e
