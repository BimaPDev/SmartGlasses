; FUN_2c486ff6 @ 0x2c486ff6 size=94
  push {r4,r5,r6,r7,r8,lr}
  mov r6,r0
  mov r7,r1
  ldr r5,[r1,#0x4]
  ble 0x2c48700e
  movs r2,#0x4
  ldr r1,[0x2c487054]
  mov r0,r5
  bl 0x2c66c540
  cbz r0,0x2c48704a
  ldr r1,[0x2c487058]
  mov r0,r5
  movs r4,#0x0
  ldr.w r8,[0x2c48705c]
  bl 0x2c66b624
  cbz r0,0x2c487032
  adds r4,#0x1
  cmp r4,#0x5
  beq 0x2c487046
  ldr.w r1,[r8,r4,lsl #0x3]
  mov r0,r5
  bl 0x2c66b624
  cmp r0,#0x0
  bne 0x2c48701e
  ldr r3,[0x2c48705c]
  add.w r4,r3,r4, lsl #0x3
  ldr r3,[r4,#0x4]
  cbz r3,0x2c487046
  mov r1,r7
  mov r0,r6
  pop.w {r4,r5,r6,r7,r8,lr}
  bx r3
  pop.w {r4,r5,r6,r7,r8,pc}
  ldr r0,[0x2c487060]
  pop.w {r4,r5,r6,r7,r8,lr}
  b.w 0x2c648600
