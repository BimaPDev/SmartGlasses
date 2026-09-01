; FUN_1007a2e8 @ 0x1007a2e8 size=30
  ldr r2,[0x1007a308]
  ldrb.w r3,[r2,#0x157]
  add.w r1,r3,#0x94
  adds r3,#0x1
  uxtb r3,r3
  cmp r3,#0x9
  it hi
  mov.hi r3,#0x0
  strh.w r0,[r2,r1,lsl #0x1]
  strb.w r3,[r2,#0x157]
  bx lr
