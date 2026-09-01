; FUN_1011ff14 @ 0x1011ff14 size=24
  push {r4,lr}
  mov r4,r0
  bl 0x1007e74c
  mov r0,r4
  bl 0x1007da4c
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  rsbs r0,r0
  pop {r4,pc}
