; FUN_1405c1f8 @ 0x1405c1f8 size=18
  ldr r3,[0x1405c20c]
  ldr r0,[r3,#0x0]
  cbz r0,0x1405c208
  ldr r3,[r3,#0x4]
  cmp r3,#0x0
  ite eq
  mov.eq r0,#0x1
  mov.ne r0,#0xff
  bx lr
