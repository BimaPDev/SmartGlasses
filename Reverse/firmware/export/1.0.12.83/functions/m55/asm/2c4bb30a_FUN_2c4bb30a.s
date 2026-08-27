; FUN_2c4bb30a @ 0x2c4bb30a size=58
  push {r4,r5,r6,lr}
  mov r4,r0
  bhi 0x2c4bb33c
  add.w r3,r0,r0, lsl #0x1
  ldr r6,[0x2c4bb344]
  lsls r5,r0,#0x1
  add.w r3,r6,r3, lsl #0x2
  ldrb r0,[r3,#0x6]
  cmp r0,#0x92
  bls 0x2c4bb330
  add r4,r5
  ldr.w r3,[r6,r4,lsl #0x2]
  ldr r0,[r3,#0x30]
  and r0,r0,#0x1
  pop {r4,r5,r6,pc}
  bl 0x2c6744f8
  cmp r0,#0x1
  beq 0x2c4bb322
  movs r0,#0x0
  pop {r4,r5,r6,pc}
  mov r1,r0
  ldr r0,[0x2c4bb348]
  bl 0x2c673ca8
