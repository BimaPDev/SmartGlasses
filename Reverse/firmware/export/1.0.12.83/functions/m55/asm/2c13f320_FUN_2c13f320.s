; FUN_2c13f320 @ 0x2c13f320 size=20
  push {r4,lr}
  mov r4,r1
  bl 0x2c14139c
  cmp r0,#0x0
  ite lt
  mov.lt.w r0,#0x80000000
  bic.ge r0,r4
  pop {r4,pc}
