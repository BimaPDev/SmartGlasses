; FUN_2c478a5c @ 0x2c478a5c size=28
  push {r3,lr}
  bl 0x2c482fc8
  cmp r0,#0x1
  beq 0x2c478a6a
  movs r0,#0xff
  pop {r3,pc}
  ldr r3,[0x2c478a78]
  ldr r2,[sp,#0x8]
  str r2,[r3,#0x0]
  bl 0x2c47d134
  movs r0,#0x0
  pop {r3,pc}
