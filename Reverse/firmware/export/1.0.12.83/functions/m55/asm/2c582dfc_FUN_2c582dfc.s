; FUN_2c582dfc @ 0x2c582dfc size=24
  push {r4,lr}
  add.w r4,r0,#0xc
  beq 0x2c582e10
  mov r0,r1
  bl 0x2c65e510
  cmp r0,#0x0
  it eq
  mov.eq r4,#0x0
  mov r0,r4
  pop {r4,pc}
