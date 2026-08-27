; FUN_2c626e94 @ 0x2c626e94 size=22
  push {r3,lr}
  ldr r0,[r0,#0x30]
  bl 0x2c4f4824
  ldr r3,[sp,#0x8]
  cmp r0,#0x0
  str r0,[r3,#0x0]
  ite lt
  mov.lt r0,#0xc
  mov.ge r0,#0x0
  pop {r3,pc}
