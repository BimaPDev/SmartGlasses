; FUN_2c48e81c @ 0x2c48e81c size=14
  cbz r0,0x2c48e828
  ldr r0,[r0,#0xc]
  ands r0,r0,#0x3
  it ne
  mov.ne r0,#0x1
  bx lr
