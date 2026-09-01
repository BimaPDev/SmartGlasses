; FUN_1013197e @ 0x1013197e size=30
  push {r4,lr}
  mov r4,r0
  bl 0x1013c70e
  cbnz r0,0x1013199a
  cmp r4,#0x0
  blt 0x1013199a
  bl 0x10115464
  mov r1,r4
  pop.w {r4,lr}
  b.w 0x10115194
  pop {r4,pc}
