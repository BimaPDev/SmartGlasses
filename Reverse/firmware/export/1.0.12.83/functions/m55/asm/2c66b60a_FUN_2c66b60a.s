; FUN_2c66b60a @ 0x2c66b60a size=26
  uxtb r1,r1
  mov r3,r0
  ldrb.w r2,[r0],#0x1
  cbz r2,0x2c66b61c
  cmp r2,r1
  bne 0x2c66b60c
  mov r0,r3
  bx lr
  cmp r1,#0x0
  it ne
  mov.ne r3,#0x0
  b 0x2c66b618
