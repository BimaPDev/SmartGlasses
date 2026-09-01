; FUN_1007a2a4 @ 0x1007a2a4 size=30
  ldr r2,[0x1007a2c4]
  ldrb.w r3,[r2,#0x156]
  add.w r1,r2,r3, lsl #0x1
  adds r3,#0x1
  uxtb r3,r3
  cmp r3,#0x1d
  it hi
  mov.hi r3,#0x0
  strh.w r0,[r1,#0xec]
  strb.w r3,[r2,#0x156]
  bx lr
