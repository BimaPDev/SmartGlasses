; FUN_2c571128 @ 0x2c571128 size=16
  push {r3,lr}
  ldr r0,[r0,#0x8]
  bl 0x2c571dcc
  cmp r0,#0xf
  it ge
  mov.ge r0,#0x10
  pop {r3,pc}
