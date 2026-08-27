; FUN_2c49c088 @ 0x2c49c088 size=34
  push {r3,lr}
  ldr r3,[0x2c49c0ac]
  ldr r1,[r3,#0x4]
  cmp r1,#0x1
  bne 0x2c49c0a4
  cmp r0,#0x0
  mov.w r0,#0x10
  it le
  mov.le r1,#0x0
  bl 0x2c49b620
  movs r0,#0x0
  pop {r3,pc}
  mov.w r0,#0xffffffff
  pop {r3,pc}
