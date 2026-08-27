; FUN_2c64ce9e @ 0x2c64ce9e size=30
  ldr r3,[r0,#0x0]
  subs r2,r3,#0x1
  cmp r3,#0x1
  push {r4,lr}
  mov r4,r0
  str r2,[r0,#0x0]
  bne 0x2c64ceba
  bl 0x2c64ce2c
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x2c664f28
  pop {r4,pc}
