; FUN_2c49c0b0 @ 0x2c49c0b0 size=24
  push {r3,lr}
  ldr r3,[0x2c49c0c8]
  ldr r3,[r3,#0x4]
  cmp r3,#0x1
  bne 0x2c49c0c2
  bl 0x2c49b444
  movs r0,#0x0
  pop {r3,pc}
  mov.w r0,#0xffffffff
  pop {r3,pc}
