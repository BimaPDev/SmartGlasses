; FUN_1405d6bc @ 0x1405d6bc size=16
  cmp r0,#0xa
  ittte ls
  ldr.ls r3,[0x1405d6cc]
  add.ls r0,#0x1a
  ldr.ls.w r0,[r3,r0,lsl #0x2]
  mov.hi r0,#0x0
  bx lr
