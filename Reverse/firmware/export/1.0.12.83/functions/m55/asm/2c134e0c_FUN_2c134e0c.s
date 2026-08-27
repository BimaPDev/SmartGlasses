; FUN_2c134e0c @ 0x2c134e0c size=138
  push {r3,r4,r5,r6,r7,r8,r9,lr}
  mov r5,r0
  mov r7,r1
  bl 0x2c1447f0
  mov r6,r0
  cbz r7,0x2c134e4e
  movs r4,#0x0
  add.w r9,r5,#0x1
  add.w r8,r5,#0x3
  ldrb.w r0,[r5,r4,lsl #0x2]
  cmp r0,#0x52
  bhi 0x2c134e52
  ldrb.w r1,[r9,r4,lsl #0x2]
  cmp r1,#0x7c
  bhi 0x2c134e52
  bl 0x2c134b4c
  cbnz r0,0x2c134e52
  ldrb.w r0,[r5,r4,lsl #0x2]
  cmp r0,#0x52
  bhi 0x2c134e7e
  cmp r0,#0x4f
  bls 0x2c134e84
  adds r4,#0x1
  cmp r7,r4
  bne 0x2c134e26
  movs r4,#0x0
  b 0x2c134e56
  lsls r4,r4,#0x8
  adds r4,#0x1
  cmp r6,#0x0
  blt 0x2c134e6e
  cbnz r6,0x2c134e64
  mov.w r2,#0xffffffff
  ldr r3,[0x2c134e98]
  str r2,[r3,#0x0]
  msr basepri,r6
  mov r0,r4
  pop.w {r3,r4,r5,r6,r7,r8,r9,pc}
  movs r0,#0x0
  ldr r3,[0x2c134e9c]
  bic r6,r6,#0x80000000
  strb r0,[r3,#0x0]
  bl 0x2c1448fc
  b 0x2c134e5a
  lsls r4,r4,#0x8
  adds r4,#0x2
  b 0x2c134e56
  ldrb.w r1,[r8,r4,lsl #0x2]
  bl 0x2c134ca0
  cmp r0,#0x0
  beq 0x2c134e48
  lsls r4,r4,#0x8
  adds r4,#0x3
  b 0x2c134e56
