; FUN_2c47fb4c @ 0x2c47fb4c size=106
  push {r4,r5,r6,r7,r8,lr}
  ldr r4,[r0,#0x0]
  mov r6,r0
  mov r8,r2
  ands r7,r4,#0x1
  bne 0x2c47fb9c
  add.w r3,r0,r2, lsl #0x2
  cmp r0,r3
  sub.w r12,r3,#0x4
  bcs 0x2c47fb98
  add.w r12,r12,#0x4
  mov.w lr,#0x0
  ldr.w r4,[r12,#-0x4]!
  orr.w r5,lr,r4, lsr #0x1
  cmp r6,r12
  lsl.w lr,r4,#0x1f
  str.w r5,[r12,#0x0]
  bcc 0x2c47fb70
  cbz r7,0x2c47fb98
  mvn r3,#0xc0000000
  add r3,r8
  ldr.w r2,[r6,r3,lsl #0x2]
  orr r2,r2,#0x80000000
  str.w r2,[r6,r3,lsl #0x2]
  pop.w {r4,r5,r6,r7,r8,pc}
  mov r3,r2
  mov r2,r1
  mov r1,r0
  bl 0x2c47f410
  mov r7,r0
  add.w r3,r6,r8, lsl #0x2
  cmp r6,r3
  sub.w r12,r3,#0x4
  bcc 0x2c47fb68
  b 0x2c47fb84
