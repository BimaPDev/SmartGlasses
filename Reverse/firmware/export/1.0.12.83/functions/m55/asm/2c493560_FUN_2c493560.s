; FUN_2c493560 @ 0x2c493560 size=110
  push {r4,r5,r6,r7,r8,r9,r10,lr}
  subs r5,r0,#0x1
  sub sp,#0x8
  uxtb r5,r5
  cmp r5,#0x8
  bls 0x2c493576
  movs r0,#0x0
  add sp,#0x8
  pop.w {r4,r5,r6,r7,r8,r9,r10,pc}
  ldr.w r10,[0x2c493620]
  mov r4,r0
  mov r8,r1
  mov r9,r2
  ldr.w r0,[r10,#0x0]
  mov r7,r3
  cbz r0,0x2c493590
  movw r1,#0xbb8
  bl 0x2c644044
  ldr r6,[0x2c493608]
  add.w r6,r6,r4, lsl #0x4
  ldrb r3,[r6,#0x1]
  cbnz r3,0x2c4935c6
  ldr r1,[0x2c49360c]
  ldr r2,[0x2c493610]
  ldr.w r0,[r1,r5,lsl #0x2]
  mov.w r1,#0x10c
  str r2,[sp,#0x0]
  str r0,[sp,#0x4]
  movs r0,#0x4
  ldr r3,[0x2c493614]
  ldr r2,[0x2c493618]
  bl 0x2c673d88
  ldr r3,[0x2c49360c]
  mov.w r1,#0x10e
  ldr r2,[0x2c493618]
  movs r0,#0x4
  ldr.w r3,[r3,r5,lsl #0x2]
  str r3,[sp,#0x4]
  ldr r3,[0x2c49361c]
  str r3,[sp,#0x0]
  ldr r3,[0x2c493614]
  bl 0x2c673d88
