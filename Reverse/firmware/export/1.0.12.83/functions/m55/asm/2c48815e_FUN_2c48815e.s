; FUN_2c48815e @ 0x2c48815e size=86
  push {r4,r5,r6,r7,r8,lr}
  mov r7,r0
  mov r8,r1
  ldr r5,[r1,#0x4]
  ble 0x2c488176
  movs r2,#0x4
  ldr r1,[0x2c4881b4]
  mov r0,r5
  bl 0x2c66c540
  cbz r0,0x2c4881aa
  movs r4,#0x0
  ldr r1,[0x2c4881b8]
  ldr r6,[0x2c4881bc]
  b 0x2c488182
  ldr.w r1,[r6,r4,lsl #0x3]
  mov r0,r5
  bl 0x2c66b624
  cbz r0,0x2c488194
  adds r4,#0x1
  cmp r4,#0x11
  bne 0x2c48817e
  pop.w {r4,r5,r6,r7,r8,pc}
  ldr r3,[0x2c4881bc]
  add.w r4,r3,r4, lsl #0x3
  ldr r3,[r4,#0x4]
  cmp r3,#0x0
  beq 0x2c488190
  mov r1,r8
  mov r0,r7
  pop.w {r4,r5,r6,r7,r8,lr}
  bx r3
  ldr r0,[0x2c4881c0]
  pop.w {r4,r5,r6,r7,r8,lr}
  b.w 0x2c648600
