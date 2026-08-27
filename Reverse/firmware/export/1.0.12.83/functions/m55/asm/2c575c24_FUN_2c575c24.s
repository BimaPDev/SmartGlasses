; FUN_2c575c24 @ 0x2c575c24 size=16
  push {r3,lr}
  ldr r0,[r0,#0xc]
  bl 0x2c573c68
  cmp r0,#0xf
  it ge
  mov.ge r0,#0x10
  pop {r3,pc}
