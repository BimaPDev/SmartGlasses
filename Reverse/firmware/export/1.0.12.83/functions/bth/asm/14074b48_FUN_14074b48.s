; FUN_14074b48 @ 0x14074b48 size=12
  ldr r3,[r0,#0x0]
  cmp r0,r3
  ite ne
  mov.ne r0,r3
  mov.eq r0,#0x0
  bx lr
