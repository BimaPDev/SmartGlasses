; FUN_2c4c1638 @ 0x2c4c1638 size=16
  ldr r2,[0x2c4c1648]
  movw r3,#0xed8
  ldr r0,[r2,#0x0]
  cmp r0,#0x0
  it eq
  mov.eq r0,r3
  bx lr
