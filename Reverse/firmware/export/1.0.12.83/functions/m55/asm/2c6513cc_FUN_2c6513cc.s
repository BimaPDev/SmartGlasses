; FUN_2c6513cc @ 0x2c6513cc size=28
  ldr r0,[r0,#0x0]
  cmp r0,r1
  bhi 0x2c6513e4
  ldr.w r3,[r0,#-0xc]
  add.w r0,r0,r3, lsl #0x2
  cmp r1,r0
  ite ls
  mov.ls r0,#0x0
  mov.hi r0,#0x1
  bx lr
  movs r0,#0x1
  bx lr
