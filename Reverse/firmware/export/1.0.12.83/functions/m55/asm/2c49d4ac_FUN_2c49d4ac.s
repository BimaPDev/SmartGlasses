; FUN_2c49d4ac @ 0x2c49d4ac size=24
  push {r4,lr}
  ldr r4,[0x2c49d4c4]
  ldr r3,[r4,#0x48]
  cmp r3,#0x1
  bne 0x2c49d4be
  bl 0x2c49c7b0
  ldr r0,[r4,#0x34]
  pop {r4,pc}
  mov.w r0,#0xffffffff
  pop {r4,pc}
