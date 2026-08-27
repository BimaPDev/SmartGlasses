; FUN_140e3cc0 @ 0x140e3cc0 size=16
  push {r0,lr}
  bl 0x140e3c34
  cmp r0,#0x0
  it mi
  cmn.mi r0,#0x0
  pop {r0,pc}
