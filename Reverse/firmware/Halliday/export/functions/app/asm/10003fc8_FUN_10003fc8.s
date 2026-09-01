; FUN_10003fc8 @ 0x10003fc8 size=16
  push {r0,lr}
  bl 0x10003f3c
  cmp r0,#0x0
  it mi
  cmn.mi r0,#0x0
  pop {r0,pc}
