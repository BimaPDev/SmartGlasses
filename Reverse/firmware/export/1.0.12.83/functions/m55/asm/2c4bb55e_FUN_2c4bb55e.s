; FUN_2c4bb55e @ 0x2c4bb55e size=94
  push {r3,r4,r5,r6,r7,lr}
  mov r4,r0
  bhi 0x2c4bb5b4
  add.w r3,r0,r0, lsl #0x1
  ldr r6,[0x2c4bb5bc]
  lsls r5,r0,#0x1
  mov r7,r1
  add.w r3,r6,r3, lsl #0x2
  ldrb r0,[r3,#0x6]
  cmp r0,#0x92
  bls 0x2c4bb5a8
  add r4,r5
  ldr.w r3,[r6,r4,lsl #0x2]
  ldr r2,[r3,#0x30]
  lsls r0,r2,#0x1f
  bmi 0x2c4bb588
  movs r0,#0x1
  pop {r3,r4,r5,r6,r7,pc}
  tst r7,#0x1
  mov.w r0,#0x0
  ite eq
  mov.eq r1,#0x0
  mov.ne.w r1,#0x100
  lsls r2,r7,#0x1e
  ldr r2,[r3,#0x30]
  it mi
  orr.mi r1,r1,#0x200
  orrs r2,r1
  str r2,[r3,#0x30]
  pop {r3,r4,r5,r6,r7,pc}
  bl 0x2c6744f8
  cmp r0,#0x1
  beq 0x2c4bb578
  movs r0,#0x1
  b 0x2c4bb586
  mov r1,r0
  ldr r0,[0x2c4bb5c0]
  bl 0x2c673ca8
