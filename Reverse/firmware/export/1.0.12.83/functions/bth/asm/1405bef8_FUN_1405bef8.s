; FUN_1405bef8 @ 0x1405bef8 size=28
  cmp r0,#0x1
  bls 0x1405bf00
  movs r0,#0x0
  bx lr
  ldr r3,[0x1405bf14]
  ldr.w r0,[r3,r0,lsl #0x2]
  cmp r0,#0x0
  beq 0x1405befe
  ldrb.w r0,[r0,#0x39]
  ubfx r0,r0,#0x2,#0x1
  bx lr
