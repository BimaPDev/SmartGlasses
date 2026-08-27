; FUN_2c62bf1c @ 0x2c62bf1c size=226
  push {r4,r5,r6,r7,r8,lr}
  mov r6,r0
  sub sp,#0x10
  cmp r0,#0x0
  beq 0x2c62bfa2
  ldr r4,[0x2c62c01c]
  movs r3,#0x0
  mov.w r1,#0xffffffff
  adds r0,r4,#0x4
  add.w r12,r4,r3, lsl #0x3
  ldrb.w r2,[r12,#0x6]
  lsls r7,r2,#0x1f
  mov r5,r2
  bmi 0x2c62bf5a
  ldrh.w r2,[r0,r3,lsl #0x3]
  cmp r2,r6
  bcc 0x2c62bf5a
  add.w r7,r4,r1, lsl #0x3
  beq 0x2c62bfea
  adds r5,r1,#0x1
  beq 0x2c62bf58
  ldrh r5,[r7,#0x4]
  cmp r5,r2
  bls 0x2c62bf5a
  sxtb r1,r3
  adds r3,#0x1
  cmp r3,#0x10
  bne 0x2c62bf32
  adds r2,r1,#0x1
  bne 0x2c62bfae
  movs r5,#0x0
  add.w r7,r4,r5, lsl #0x3
  ldrb r3,[r7,#0x6]
  lsls r3,r3,#0x1f
  bpl 0x2c62bfc6
  adds r5,#0x1
  cmp r5,#0x10
  bne 0x2c62bf66
  ldr r4,[0x2c62c020]
  movw r2,#0x189
  ldr r3,[0x2c62c024]
  movs r0,#0x3
  ldr r1,[0x2c62c028]
  str r4,[sp,#0x0]
  bl 0x2c62c82c
  mov.w r8,#0x0
  mov r0,r8
  add sp,#0x10
  pop.w {r4,r5,r6,r7,r8,pc}
  add.w r2,r4,r1, lsl #0x3
  ldr.w r8,[r4,r1,lsl #0x3]
  ldrb r3,[r2,#0x6]
  orr r3,r3,#0x1
  strb r3,[r2,#0x6]
  mov r0,r8
  add sp,#0x10
  pop.w {r4,r5,r6,r7,r8,pc}
  mov r1,r6
  ldr.w r0,[r4,r5,lsl #0x3]
  bl 0x2c62bebc
  mov r8,r0
  cbz r0,0x2c62bffe
  ldrb r3,[r7,#0x6]
  str.w r0,[r4,r5,lsl #0x3]
  mov r0,r8
  orr r3,r3,#0x1
  strh r6,[r7,#0x4]
  strb r3,[r7,#0x6]
  add sp,#0x10
  pop.w {r4,r5,r6,r7,r8,pc}
  ldr.w r8,[r4,r3,lsl #0x3]
  orr r5,r5,#0x1
  mov r0,r8
  strb.w r5,[r12,#0x6]
  add sp,#0x10
  pop.w {r4,r5,r6,r7,r8,pc}
  ldr r1,[0x2c62c038]
  ldr r2,[0x2c62c03c]
  ldr r0,[0x2c62c02c]
  ldr r3,[0x2c62c024]
  str r0,[sp,#0x0]
  movs r0,#0x3
  strd r2,r1,[sp,#0x4]
  mov.w r2,#0x17e
  ldr r1,[0x2c62c028]
  bl 0x2c62c82c
