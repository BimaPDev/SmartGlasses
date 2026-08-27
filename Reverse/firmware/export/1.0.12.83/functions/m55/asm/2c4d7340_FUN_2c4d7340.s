; FUN_2c4d7340 @ 0x2c4d7340 size=78
  clz r2,r0
  rsb.w r3,r2,#0x1c
  rsb.w r12,r2,#0x1e
  asrs r0,r3
  cmp r0,#0xc
  beq 0x2c4d7382
  cmp r0,#0xf
  beq 0x2c4d737e
  cmp r0,#0x8
  beq 0x2c4d7386
  movs r3,#0x0
  cmp r1,#0x1
  and r1,r1,#0x1
  add.w r3,r3,r3, lsl #0x3
  ldr r2,[0x2c4d7390]
  add.w r1,r1,r1, lsl #0x3
  it eq
  sub.eq.w r12,r12,#0x4
  add.w r1,r3,r1, lsl #0x2
  add r1,r12
  ldr.w r0,[r2,r1,lsl #0x2]
  bx lr
  movs r3,#0x1
  b 0x2c4d735c
  movs r3,#0x2
  b 0x2c4d735c
  rsb.w r12,r2,#0x1d
  movs r3,#0x0
  b 0x2c4d735c
