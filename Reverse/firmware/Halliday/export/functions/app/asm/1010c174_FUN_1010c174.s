; FUN_1010c174 @ 0x1010c174 size=140
  push {r4,r5,r6,lr}
  mov r4,r0
  mov r6,r1
  mov r5,r2
  bl 0x1013b026
  cmp r0,#0x0
  beq 0x1010c1fc
  ldr.w r3,[r4,#0x6e4]
  ldr.w r2,[r4,#0x6d8]
  add.w r3,r4,r3, lsl #0x2
  ldr.w r3,[r3,#0x6dc]
  adds r3,#0x10
  cmp r3,r2
  bcs 0x1010c1e6
  ldr.w r3,[r4,#0x6e4]
  adds r5,#0x7
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r3,#0x6d0]
  lsrs r5,r5,#0x3
  ldr.w r3,[r3,#0x6dc]
  orr r5,r5,#0x60000000
  str r5,[r2,r3]
  ldr.w r3,[r4,#0x6e4]
  movs r1,#0x10
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r3,#0x6d0]
  ldr.w r3,[r3,#0x6dc]
  add r3,r2
  str r6,[r3,#0x4]
  ldr.w r0,[r4,#0x6e4]
  add.w r4,r4,r0, lsl #0x2
  ldr.w r3,[r4,#0x6dc]
  ldr r0,[0x1010c200]
  adds r3,#0x8
  str.w r3,[r4,#0x6dc]
  pop.w {r4,r5,r6,lr}
  b.w 0x1013b2f2
  mov r0,r4
  bl 0x1010b660
  cbnz r0,0x1010c1fa
  mov r1,r0
  mov r0,r4
  bl 0x1010b62c
  cmp r0,#0x0
  beq 0x1010c19a
  pop {r4,r5,r6,pc}
  movs r0,#0x3
  b 0x1010c1fa
