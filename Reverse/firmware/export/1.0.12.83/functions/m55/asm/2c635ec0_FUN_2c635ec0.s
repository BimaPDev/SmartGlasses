; FUN_2c635ec0 @ 0x2c635ec0 size=86
  ldrh r3,[r0,#0x30]
  cbz r3,0x2c635f14
  push {r4,r5,r6,r7,r8,lr}
  mvns r7,r1
  movs r5,#0x0
  and r6,r1,#0x200
  mov r4,r0
  sxth r7,r7
  mov r1,r5
  movw r8,#0xffff
  uxth r3,r5
  ldr r0,[r4,#0x2c]
  cmp r1,r8
  add.w r5,r5,#0x1
  ldrh.w r2,[r0,r3,lsl #0x1]
  and.w r2,r2,r7
  strh.w r2,[r0,r3,lsl #0x1]
  beq 0x2c635efe
  ldrh r3,[r4,#0x30]
  mov r0,r4
  cmp r3,r1
  bls 0x2c635efe
  bl 0x2c6352cc
  cbnz r6,0x2c635f0c
  ldrh r3,[r4,#0x30]
  uxth r1,r5
  cmp r3,r1
  bhi 0x2c635eda
  pop.w {r4,r5,r6,r7,r8,pc}
  mov r0,r4
  bl 0x2c600bac
  b 0x2c635f00
  bx lr
