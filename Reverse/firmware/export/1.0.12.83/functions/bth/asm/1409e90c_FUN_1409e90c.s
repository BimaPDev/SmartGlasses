; FUN_1409e90c @ 0x1409e90c size=18
  mov r2,r1
  push {r3,lr}
  ldr r1,[0x1409e920]
  bl 0x140b5050
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  pop {r3,pc}
