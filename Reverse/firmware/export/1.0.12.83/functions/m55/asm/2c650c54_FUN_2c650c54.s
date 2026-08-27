; FUN_2c650c54 @ 0x2c650c54 size=26
  ldr r0,[r0,#0x0]
  cmp r0,r1
  bhi 0x2c650c6a
  ldr.w r3,[r0,#-0xc]
  add r0,r3
  cmp r1,r0
  ite ls
  mov.ls r0,#0x0
  mov.hi r0,#0x1
  bx lr
  movs r0,#0x1
  bx lr
