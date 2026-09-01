; FUN_100a623c @ 0x100a623c size=30
  cbnz r0,0x100a6244
  ldr r3,[0x100a625c]
  ldr r0,[r3,#0x0]
  bx lr
  cmp r0,#0x1
  bne 0x100a624e
  ldr r3,[0x100a625c]
  ldr r0,[r3,#0x4]
  bx lr
  cmp r0,#0x3
  itte eq
  ldr.eq r3,[0x100a625c]
  ldr.eq r0,[r3,#0xc]
  mov.ne r0,#0x0
  bx lr
