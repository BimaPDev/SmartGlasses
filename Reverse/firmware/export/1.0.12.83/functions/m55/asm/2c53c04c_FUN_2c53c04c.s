; FUN_2c53c04c @ 0x2c53c04c size=22
  ldr r3,[r0,#0x4]
  cbz r3,0x2c53c05e
  ldr r3,[r0,#0x8]
  cbz r3,0x2c53c05e
  ldr r0,[r0,#0xc]
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  bx lr
  mov r0,r3
  bx lr
