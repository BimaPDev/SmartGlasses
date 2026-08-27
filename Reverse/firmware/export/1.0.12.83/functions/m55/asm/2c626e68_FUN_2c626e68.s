; FUN_2c626e68 @ 0x2c626e68 size=18
  push {r3,lr}
  ldr r0,[r0,#0x30]
  bl 0x2c4f482c
  cmp r0,#0x0
  ite lt
  mov.lt r0,#0xc
  mov.ge r0,#0x0
  pop {r3,pc}
