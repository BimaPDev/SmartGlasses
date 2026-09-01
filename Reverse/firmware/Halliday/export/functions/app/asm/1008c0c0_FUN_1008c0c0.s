; FUN_1008c0c0 @ 0x1008c0c0 size=26
  cmp r0,#0x1c
  bhi 0x1008c0d6
  movs r3,#0x1
  lsl.w r0,r3,r0
  ldr r3,[0x1008c0dc]
  ands r3,r0
  subs r0,r3,#0x0
  it ne
  mov.ne r0,#0x1
  bx lr
  movs r0,#0x0
  bx lr
