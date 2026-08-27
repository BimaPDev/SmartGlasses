; FUN_1409596c @ 0x1409596c size=32
  push {lr}
  sub sp,#0xc
  str r0,[sp,#0x4]
  bl 0x140755e4
  ldr r0,[sp,#0x4]
  bl 0x14085c08
  movs r1,#0x1
  bl 0x140889ac
  add sp,#0xc
  pop.w lr
  b.w 0x1407561c
