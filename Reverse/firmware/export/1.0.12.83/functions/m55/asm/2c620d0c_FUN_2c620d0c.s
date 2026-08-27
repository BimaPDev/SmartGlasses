; FUN_2c620d0c @ 0x2c620d0c size=14
  ldr r3,[0x2c620d1c]
  ldr r0,[0x2c620d20]
  ldr r3,[r3,#0x0]
  cmp r3,#0x0
  it eq
  mov.eq r0,r3
  bx lr
