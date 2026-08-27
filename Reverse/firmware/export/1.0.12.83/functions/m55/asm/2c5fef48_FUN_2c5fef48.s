; FUN_2c5fef48 @ 0x2c5fef48 size=28
  push {r3,lr}
  cbz r0,0x2c5fef5a
  ldr.w r0,[r0,#0x15c]
  cmp r0,#0x0
  ite le
  mov.le r0,#0x0
  mov.gt r0,#0x1
  pop {r3,pc}
  bl 0x2c62a470
  cmp r0,#0x0
  bne 0x2c5fef4c
  pop {r3,pc}
