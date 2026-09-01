; FUN_100a71e4 @ 0x100a71e4 size=26
  cmp r0,#0x15
  bhi 0x100a71fa
  movs r3,#0x1
  lsl.w r0,r3,r0
  ldr r3,[0x100a7200]
  tst r0,r3
  ite eq
  mov.eq r0,#0x2
  mov.ne r0,#0x1
  bx lr
  movs r0,#0x2
  bx lr
