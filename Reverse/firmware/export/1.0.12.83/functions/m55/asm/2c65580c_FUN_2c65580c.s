; FUN_2c65580c @ 0x2c65580c size=36
  ldr r3,[r1,#0x18]
  push {r4,lr}
  mov r4,r0
  cbnz r3,0x2c65581a
  ldr r0,[0x2c655830]
  bl 0x2c658674
  ldrd r3,r2,[r1,#0x0]
  add.w r1,r0,#0x8
  add r2,r3
  str r1,[r0,#0x0]
  mov r1,r3
  bl 0x2c654a58
  mov r0,r4
  pop {r4,pc}
