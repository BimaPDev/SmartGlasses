; FUN_2c4bce68 @ 0x2c4bce68 size=168
  cmp r0,#0x1
  push {r4,r5,r6,r7,r8,lr}
  mov r4,r0
  bhi 0x2c4bcf08
  ldr r7,[0x2c4bcf10]
  rsb r3,r0,r0, lsl #0x3
  lsls r6,r0,#0x3
  add.w r3,r7,r3, lsl #0x4
  ldrb r3,[r3,#0xc]
  cbnz r3,0x2c4bce88
  movs r0,#0x0
  pop.w {r4,r5,r6,r7,r8,pc}
  add.w r3,r0,r0, lsl #0x1
  ldr r5,[0x2c4bcf14]
  lsl.w r8,r0,#0x1
  add.w r2,r5,r3, lsl #0x2
  ldr.w r1,[r5,r3,lsl #0x2]
  ldrsb.w r3,[r2,#0xa]
  uxtb r2,r3
  cmp r2,#0x47
  bhi 0x2c4bcec6
  movs r0,#0x1
  and r2,r2,#0x1f
  lsrs r3,r3,#0x5
  lsl.w r2,r0,r2
  ldr r0,[0x2c4bcf18]
  add.w r3,r0,r3, lsl #0x2
  str.w r2,[r3,#0x80]
  dsb #0xf
  isb #0xf
  str.w r2,[r3,#0x180]
  ldr r3,[r1,#0x6c]
  add r8,r4
  mov r0,r4
  subs r4,r6,r4
  bic r3,r3,#0x1
  add.w r5,r5,r8, lsl #0x2
  add.w r4,r7,r4, lsl #0x4
  str r3,[r1,#0x6c]
  bl 0x2c4bbfe4
  ldrb.w r8,[r5,#0x9]
  mov r0,r8
  bl 0x2c673af8
  ldrb r5,[r5,#0x8]
  mov r0,r5
  bl 0x2c673af8
  mov r0,r8
  bl 0x2c673ce8
  mov r0,r5
  bl 0x2c673ce8
  movs r3,#0x0
  movs r0,#0x0
  strb r3,[r4,#0xc]
  pop.w {r4,r5,r6,r7,r8,pc}
  mov r1,r0
  ldr r0,[0x2c4bcf1c]
  bl 0x2c673ca8
