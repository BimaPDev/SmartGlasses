; FUN_2c57f4f0 @ 0x2c57f4f0 size=16
  push {r3,lr}
  ldr r0,[r0,#0xc]
  bl 0x2c58031c
  cmp r0,#0xf
  it ge
  mov.ge r0,#0x10
  pop {r3,pc}
