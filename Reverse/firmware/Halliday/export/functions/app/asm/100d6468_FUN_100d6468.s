; FUN_100d6468 @ 0x100d6468 size=84
  push {r3,r4,r5,r6,r7,r8,r10,lr}
  ldr r6,[0x100d64bc]
  mov r7,r0
  mov r5,r1
  movs r4,#0x0
  mov r10,r6
  ldr r0,[r6,#0x0]
  add.w r8,r4,#0xd
  add.w r3,r0,r8, lsl #0x3
  ldrb r3,[r3,#0xb]
  lsls r3,r3,#0x1f
  bmi 0x100d6490
  adds r4,#0x1
  cmp r4,#0x3
  bne 0x100d6476
  pop.w {r3,r4,r5,r6,r7,r8,r10,pc}
  add.w r0,r0,r4, lsl #0x3
  movs r2,#0x6
  mov r1,r7
  adds r0,#0x6d
  bl 0x1011ea30
  cmp r0,#0x0
  bne 0x100d6486
  cmp r5,#0x3
  beq 0x100d64aa
  cmp r5,#0x9
  bne 0x100d648c
  ldr.w r3,[r10,#0x0]
  add.w r3,r3,r8, lsl #0x3
  ldrb r2,[r3,#0xb]
  bfc r2,#0x0,#0x1
  strb r2,[r3,#0xb]
  b 0x100d648c
