; FUN_100a71c4 @ 0x100a71c4 size=28
  cmp r0,#0x15
  bhi 0x100a71dc
  movs r3,#0x1
  lsl.w r0,r3,r0
  ldr r3,[0x100a71e0]
  ands r3,r0
  cmp r3,#0x0
  ite eq
  mov.eq r0,#0x2
  mov.ne r0,#0x1
  bx lr
  movs r0,#0x2
  bx lr
