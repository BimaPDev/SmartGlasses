; FUN_2c4e102c @ 0x2c4e102c size=34
  push {r4,r5,r6,lr}
  mov r4,r0
  add.w r0,r0,#0x15c
  mov r5,r1
  mov r6,r2
  bl 0x2c4df80c
  cbnz r0,0x2c4e104c
  mov r2,r6
  mov r1,r5
  mov r0,r4
  pop.w {r4,r5,r6,lr}
  b.w 0x2c4e015e
  pop {r4,r5,r6,pc}
