; FUN_2c64c9f4 @ 0x2c64c9f4 size=98
  push {r4,r5,r6,lr}
  eors r2,r1
  mov r5,r1
  adds r6,r0,r1
  ldr r4,[0x2c64ca58]
  cmp r5,#0x3
  sub.w r3,r6,r5
  bls 0x2c64ca18
  ldr r3,[r3,#0x0]
  muls r2,r4
  subs r5,#0x4
  muls r3,r4
  eor.w r3,r3,r3, lsr #0x18
  muls r3,r4
  eors r2,r3
  b 0x2c64c9fe
  lsrs r3,r1,#0x2
  mvn r5,#0x3
  mla r1,r5,r3,r1
  add.w r5,r0,r3, lsl #0x2
  cmp r1,#0x2
  beq 0x2c64ca4e
  cmp r1,#0x3
  beq 0x2c64ca48
  cmp r1,#0x1
  bne 0x2c64ca3a
  ldrb.w r0,[r0,r3,lsl #0x2]
  eors r2,r0
  muls r2,r4
  eor.w r2,r2,r2, lsr #0xd
  mul r0,r4,r2
  eor.w r0,r0,r0, lsr #0xf
  pop {r4,r5,r6,pc}
  ldrb r1,[r5,#0x2]
  eor.w r2,r2,r1, lsl #0x10
  ldrb r1,[r5,#0x1]
  eor.w r2,r2,r1, lsl #0x8
  b 0x2c64ca32
