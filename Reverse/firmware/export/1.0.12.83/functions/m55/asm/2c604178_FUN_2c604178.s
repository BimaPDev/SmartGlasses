; FUN_2c604178 @ 0x2c604178 size=14
  cbz r0,0x2c604184
  ldr r3,[r0,#0x4]
  cbz r3,0x2c604184
  mov r0,r3
  cmp r0,#0x0
  bne 0x2c60417a
  bx lr
