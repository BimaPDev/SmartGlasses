; FUN_1406b57c @ 0x1406b57c size=84
  push {r4,r5,r6,r7,r8,r9,r10,lr}
  mov.w r9,#0xff
  mov.w r8,#0x0
  ldr r7,[0x1406b5d0]
  add.w r10,r7,#0x8
  ldr.w r5,[r7],#0x4
  cbnz r5,0x1406b59c
  cmp r7,r10
  bne 0x1406b58e
  pop.w {r4,r5,r6,r7,r8,r9,r10,pc}
  ldrb.w r6,[r5,#0x4c]
  cmp r6,#0x0
  beq 0x1406b594
  movs r2,#0x0
  mov r3,r2
  ldr r1,[r5,#0x48]
  add.w r12,r3,r3, lsl #0x1
  add.w lr,r1,r12, lsl #0x1
  ldrb.w r4,[lr,#0x4]
  adds r2,#0x1
  cmp r4,r0
  uxtb r3,r2
  bne 0x1406b5ca
  strb.w r9,[lr,#0x4]
  strh.w r8,[r1,r12,lsl #0x1]
  ldrb.w r6,[r5,#0x4c]
  cmp r6,r3
  bhi 0x1406b5a8
  b 0x1406b594
