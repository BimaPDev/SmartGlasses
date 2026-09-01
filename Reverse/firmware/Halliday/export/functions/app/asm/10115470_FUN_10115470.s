; FUN_10115470 @ 0x10115470 size=26
  mrs r3,ipsr
  cbnz r3,0x10115486
  ldr r3,[0x1011548c]
  ldr r3,[r3,#0x8]
  ldrh r0,[r3,#0xe]
  cmp r0,#0x7f
  ite hi
  mov.hi r0,#0x0
  mov.ls r0,#0x1
  bx lr
  movs r0,#0x0
  bx lr
