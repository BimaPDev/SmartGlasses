; FUN_1409d4bc @ 0x1409d4bc size=38
  push {r4,lr}
  bl 0x140280f4
  ldr r4,[0x1409d4e4]
  strb r0,[r4,#0x0]
  bl 0x140280f4
  strb r0,[r4,#0x1]
  bl 0x140280f4
  ldr r3,[0x1409d4e8]
  strb r0,[r3,#0x0]
  bl 0x140ad8cc
  ldr r0,[0x1409d4ec]
  bl 0x140ad8bc
  movs r0,#0x0
  pop {r4,pc}
