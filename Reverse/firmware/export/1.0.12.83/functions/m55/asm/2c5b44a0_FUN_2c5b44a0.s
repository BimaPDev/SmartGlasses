; FUN_2c5b44a0 @ 0x2c5b44a0 size=128
  cmp.w r0,#0xe10
  push {r4}
  bcc 0x2c5b44ec
  ldr r3,[0x2c5b4520]
  mov.w r12,#0xe10
  umull r4,r3,r3,r0
  lsrs r4,r3,#0xb
  mov r3,r4
  mls r4,r12,r4,r0
  cbz r4,0x2c5b44dc
  ldr r0,[0x2c5b4524]
  umull r0,r12,r0,r4
  lsr.w r12,r12,#0x5
  rsb r0,r12,r12, lsl #0x4
  cmp.w r4,r0, lsl #0x2
  beq 0x2c5b4516
  add.w r4,r12,#0x1
  cmp r4,#0x3c
  itt eq
  add.eq r3,#0x1
  mov.eq r4,#0x0
  cmp r3,#0x63
  it cs
  mov.cs r3,#0x63
  str r3,[r1,#0x0]
  str r4,[r2,#0x0]
  pop.w r4
  bx lr
  cmp r0,#0x3b
  bls 0x2c5b4508
  ldr r4,[0x2c5b4524]
  umull r3,r4,r4,r0
  lsrs r4,r4,#0x5
  rsb r3,r4,r4, lsl #0x4
  subs.w r3,r0,r3, lsl #0x2
  beq 0x2c5b44e2
  adds r4,#0x1
  movs r3,#0x0
  b 0x2c5b44d4
  movs r3,#0x0
  mov r4,r3
  str r3,[r1,#0x0]
  str r4,[r2,#0x0]
  pop.w r4
  bx lr
  cmp r3,#0x63
  mov r4,r12
  it cs
  mov.cs r3,#0x63
  b 0x2c5b44e2
