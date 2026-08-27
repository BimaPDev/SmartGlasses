; FUN_2c5f4e38 @ 0x2c5f4e38 size=40
  push {lr}
  ldrb.w r3,[r1,#0x1]!
  ldrsb.w lr,[r2,r3]
  cmp.w lr,#0x0
  blt 0x2c5f4e3a
  cmp r3,#0x8
  bls 0x2c5f4e54
  cmp r3,#0xa
  bls 0x2c5f4e64
  cmp r3,#0xd
  beq 0x2c5f4e64
  movs r0,#0x0
  pop.w pc
  sub.w r0,r12,r0
  b 0x2c5f4e56
