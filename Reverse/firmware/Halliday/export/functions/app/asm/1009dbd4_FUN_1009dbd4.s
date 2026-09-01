; FUN_1009dbd4 @ 0x1009dbd4 size=12
  ldr r3,[0x1009dbe0]
  ldr r0,[r3,#0x10]
  cmp r0,#0x0
  it ne
  mov.ne r0,r3
  bx lr
