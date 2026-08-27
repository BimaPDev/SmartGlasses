; FUN_1409f494 @ 0x1409f494 size=90
  push {r3,r4,r5,r6,r7,r8,r9,lr}
  ldr r3,[0x1409f4f0]
  ldr r7,[r3,#0x0]
  ldr r6,[r7,#0x0]
  cbz r6,0x1409f4e2
  mov r8,r0
  mov r9,r1
  movs r4,#0x0
  b 0x1409f4ac
  cmp r6,r4
  bls 0x1409f4e8
  rsb r5,r4,r4, lsl #0x3
  add.w r5,r4,r5, lsl #0x3
  lsls r5,r5,#0x1
  add.w r1,r5,#0x5b
  movs r2,#0x10
  mov r0,r9
  add r1,r7
  bl 0x140db784
  adds r4,#0x1
  uxtb r4,r4
  cmp r0,#0x0
  bne 0x1409f4a8
  adds r5,#0x1a
  ldr r3,[r7,r5]
  add r5,r7
  str.w r3,[r8,#0x0]
  ldrh r3,[r5,#0x4]
  movs r0,#0x1
  strh.w r3,[r8,#0x4]
  pop.w {r3,r4,r5,r6,r7,r8,r9,pc}
  mov r0,r6
  pop.w {r3,r4,r5,r6,r7,r8,r9,pc}
  movs r0,#0x0
  pop.w {r3,r4,r5,r6,r7,r8,r9,pc}
