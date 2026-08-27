; FUN_2c644100 @ 0x2c644100 size=20
  push {r4,lr}
  mov r4,r1
  bl 0x2c646ab8
  cmp r0,#0x0
  ite ge
  bic.ge r0,r4
  mov.lt.w r0,#0x80000000
  pop {r4,pc}
