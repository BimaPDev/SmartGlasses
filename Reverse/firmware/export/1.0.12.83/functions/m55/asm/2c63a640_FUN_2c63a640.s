; FUN_2c63a640 @ 0x2c63a640 size=76
  cmp r0,#0x0
  bne 0x2c63a630
  ldr r3,[0x2c63a6a4]
  add.w r4,r3,r4, lsl #0x3
  ldr r3,[r4,#0x4]
  cbz r3,0x2c63a65e
  pop.w {r4,r5,r6,r7,r8,lr}
  bx r3
  cmp.w r8,#0x2
  beq 0x2c63a67e
  movs r4,#0x0
  ldr r1,[0x2c63a6ac]
  ldr r6,[0x2c63a6b0]
  b 0x2c63a670
  ldr.w r1,[r6,r4,lsl #0x3]
  mov r0,r5
  bl 0x2c66b624
  cbz r0,0x2c63a688
  adds r4,#0x1
  cmp r4,#0xa
  bne 0x2c63a66c
  pop.w {r4,r5,r6,r7,r8,pc}
  ldr r3,[0x2c63a6b0]
  add.w r4,r3,r4, lsl #0x3
  ldr r3,[r4,#0x4]
  cmp r3,#0x0
  beq 0x2c63a67e
  ldr r0,[r7,#0x8]
  pop.w {r4,r5,r6,r7,r8,lr}
  bx r3
