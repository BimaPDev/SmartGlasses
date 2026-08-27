; FUN_2c610588 @ 0x2c610588 size=262
  push {r4,r5,r6,r7,r8,lr}
  ldrb r6,[r0,#0x4]
  smulbb r6,r6,r1
  cmp.w r2,r6, asr #0x8
  ble 0x2c61067c
  asrs r7,r6,#0x8
  ldrb r6,[r0,#0x18]
  add.w r12,r6,#0xffffffff
  add.w r3,r0,r12, lsl #0x3
  ldrb r3,[r3,#0x4]
  smulbb r3,r3,r1
  cmp.w r2,r3, asr #0x8
  bge 0x2c610674
  cmp r6,#0x1
  bls 0x2c610682
  mov.w r12,#0x1
  add.w r8,r0,#0x4
  b 0x2c6105ca
  add.w r12,r12,#0x1
  uxtb.w lr,r12
  cmp r6,lr
  bls 0x2c610682
  ldrb.w r3,[r8,r12,lsl #0x3]
  smulbb r3,r3,r1
  cmp.w r2,r3, asr #0x8
  asr.w lr,r3, asr #0x8
  bgt 0x2c6105be
  add.w r4,r0,r12, lsl #0x3
  add.w r6,r12,#0xffffffff
  ldr.w r5,[r0,r12,lsl #0x3]
  ldrb.w r3,[r4,#-0x4]
  ldr.w r4,[r4,#-0x8]
  smulbb r3,r3,r1
  subs.w lr,lr,r3, asr #0x8
  asr.w r7,r3, asr #0x8
  beq 0x2c610688
  subs r2,r2,r7
  uxtb r1,r4
  sxth r3,r2
  ubfx r2,r4,#0x8,#0x8
  ubfx r4,r4,#0x10,#0x8
  rsb r3,r3,r3, lsl #0x8
  sdiv r3,r3,lr
  mvns r0,r3
  uxtb r3,r3
  uxtb r0,r0
  smulbb r4,r4,r0
  smulbb r1,r1,r0
  smulbb r2,r2,r0
  uxtb r0,r5
  mla r1,r3,r0,r1
  ubfx r0,r5,#0x8,#0x8
  ubfx r5,r5,#0x10,#0x8
  mla r2,r3,r0,r2
  movs r0,#0x0
  mla r3,r3,r5,r4
  add.w r4,r1,r1, lsl #0x8
  add.w r1,r1,r4, lsl #0x7
  add.w r5,r3,r3, lsl #0x8
  lsrs r1,r1,#0x17
  add.w r3,r3,r5, lsl #0x7
  bfi r0,r1,#0x0,#0x8
  add.w r1,r2,r2, lsl #0x8
  ubfx r3,r3,#0x17,#0x8
  add.w r2,r2,r1, lsl #0x7
  ubfx r2,r2,#0x17,#0x8
  bfi r0,r2,#0x8,#0x8
  bfi r0,r3,#0x10,#0x8
  orr r0,r0,#0xff000000
  pop.w {r4,r5,r6,r7,r8,pc}
  ldr.w r0,[r0,r12,lsl #0x3]
  pop.w {r4,r5,r6,r7,r8,pc}
  ldr r0,[r0,#0x0]
  pop.w {r4,r5,r6,r7,r8,pc}
  mov.w lr,#0x0
  b 0x2c6105fe
  ldr.w r0,[r0,r6,lsl #0x3]
  b 0x2c610678
