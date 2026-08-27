; FUN_14044e9c @ 0x14044e9c size=24
  push {r4,lr}
  movs r0,#0x0
  bl 0x140434e0
  mov r4,r0
  movs r0,#0x1
  bl 0x140434e0
  cmp r0,#0x0
  it eq
  mov.eq r0,r4
  pop {r4,pc}
