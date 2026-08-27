; FUN_2c62f4cc @ 0x2c62f4cc size=26
  push {r3,lr}
  ldr r3,[0x2c62f4e8]
  str r0,[r3,#0x0]
  bl 0x2c4969a8
  cbnz r0,0x2c62f4da
  pop {r3,pc}
  movs r1,#0x13
  movs r0,#0x12
  pop.w {r3,lr}
  b.w 0x2c4969dc
