; FUN_140d2c5c @ 0x140d2c5c size=152
  push {r4,r5,r6,r7,r8,r9,lr}
  movs r5,#0x0
  add.w r12,r3,#0xffffffff
  ldrd r6,r4,[sp,#0x1c]
  mov r7,r5
  ldrb.w lr,[r2,r7]
  sub.w r8,r4,r6
  adds r3,r2,r7
  cmp.w lr,r8, asr #0x2
  blt 0x140d2c8c
  subs r7,r0,#0x4
  cmp r6,r4
  beq 0x140d2ca4
  ldr.w r12,[r6],#0x4
  str.w r12,[r7,#0x4]!
  b 0x140d2c7e
  sxtb.w r9,lr
  cmp.w r9,#0x0
  ble 0x140d2c7c
  cmp r12,r7
  sub.w r4,r4,lr, lsl #0x2
  ite hi
  add.hi r7,#0x1
  add.ls r5,#0x1
  b 0x140d2c6c
  add r0,r8
  subs r5,#0x1
  bcc 0x140d2cca
  str r1,[r0,#0x0]
  mov r12,r0
  ldrb r6,[r3,#0x0]
  lsls r7,r6,#0x2
  add.w r6,r4,r6, lsl #0x2
  cmp r4,r6
  bne 0x140d2cc0
  adds r7,#0x4
  add r0,r7
  b 0x140d2ca6
  ldr.w lr,[r4],#0x4
  str.w lr,[r12,#0x4]!
  b 0x140d2cb6
  cmp r3,r2
  beq 0x140d2cf0
  str r1,[r0,#0x0]
  mov r7,r0
  ldrb.w r5,[r3,#-0x1]!
  lsls r6,r5,#0x2
  add.w r5,r4,r5, lsl #0x2
  cmp r4,r5
  bne 0x140d2ce6
  adds r6,#0x4
  add r0,r6
  b 0x140d2cca
  ldr.w r12,[r4],#0x4
  str.w r12,[r7,#0x4]!
  b 0x140d2cdc
  pop.w {r4,r5,r6,r7,r8,r9,pc}
