; FUN_14004264 @ 0x14004264 size=20
  push {r4,lr}
  mov r4,r1
  bl 0x14006a74
  cmp r0,#0x0
  ite lt
  mov.lt.w r0,#0x80000000
  bic.ge r0,r4
  pop {r4,pc}
