; FUN_2c6648e8 @ 0x2c6648e8 size=26
  ldr r3,[r0,#0x0]
  cmp r3,r1
  bhi 0x2c6648fe
  ldr r0,[r0,#0x4]
  add.w r0,r3,r0, lsl #0x2
  cmp r1,r0
  ite ls
  mov.ls r0,#0x0
  mov.hi r0,#0x1
  bx lr
  movs r0,#0x1
  bx lr
