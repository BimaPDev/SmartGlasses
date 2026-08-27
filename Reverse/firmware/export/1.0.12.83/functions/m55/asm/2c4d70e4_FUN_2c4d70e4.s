; FUN_2c4d70e4 @ 0x2c4d70e4 size=30
  mov r3,r0
  cbz r0,0x2c4d70fe
  ldr r2,[r0,#0x0]
  cbz r2,0x2c4d70fe
  ldr r2,[r0,#0x4]
  cbz r2,0x2c4d70fe
  subs r1,#0x0
  mov.w r0,#0x0
  it ne
  mov.ne r1,#0x1
  str r1,[r3,#0x8]
  bx lr
  movs r0,#0x1
  bx lr
