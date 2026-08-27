; FUN_14065f94 @ 0x14065f94 size=62
  movw r12,#0x9c4
  mla r1,r2,r1,r1
  mul r1,r12,r1
  ldr r3,[0x14065fd4]
  add.w r1,r1,#0x1f4
  cmp r1,r3
  bls 0x14065fb6
  ldr r3,[0x14065fd8]
  cmp r1,r3
  bls 0x14065fc6
  movw r1,#0x7530
  b 0x14065fb8
  movs r1,#0x64
  ldr r3,[0x14065fdc]
  adds r0,#0x22
  ldr.w r3,[r3,r0,lsl #0x2]
  strh.w r1,[r3,#0x52]
  bx lr
  ldr r3,[0x14065fe0]
  umull r3,r1,r3,r1
  ubfx r1,r1,#0x6,#0x10
  b 0x14065fb8
