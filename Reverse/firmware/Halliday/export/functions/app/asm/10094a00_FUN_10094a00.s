; FUN_10094a00 @ 0x10094a00 size=18
  push {r3,lr}
  movs r1,#0x18
  ldr r0,[0x10094a14]
  bl 0x1012b008
  movs r2,#0x1
  ldr r3,[0x10094a18]
  strb r2,[r3,#0x0]
  pop {r3,pc}
