; FUN_2c65e990 @ 0x2c65e990 size=24
  ldr r3,[r0,#0x0]
  cmp r3,r1
  bhi 0x2c65e9a4
  ldr r0,[r0,#0x4]
  add r0,r3
  cmp r1,r0
  ite ls
  mov.ls r0,#0x0
  mov.hi r0,#0x1
  bx lr
  movs r0,#0x1
  bx lr
