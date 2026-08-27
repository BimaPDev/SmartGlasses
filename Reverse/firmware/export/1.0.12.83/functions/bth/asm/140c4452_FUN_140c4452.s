; FUN_140c4452 @ 0x140c4452 size=22
  push {r3,lr}
  ldr r3,[r0,#0x8]
  cmp r3,#0x0
  blt 0x140c4460
  bl 0x140c422c
  pop {r3,pc}
  movs r2,#0x0
  bl 0x140c4248
  b 0x140c445e
