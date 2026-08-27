; FUN_2c4ecdf8 @ 0x2c4ecdf8 size=34
  push {r4,lr}
  bl 0x2c4e9434
  ldr r3,[r0,#0x18]
  blx r3
  cbnz r0,0x2c4ece06
  pop {r4,pc}
  ldr r4,[0x2c4ece1c]
  ldr r0,[r4,#0x0]
  bl 0x2c62be1c
  movs r3,#0x0
  str r3,[r4,#0x0]
  pop.w {r4,lr}
  b.w 0x2c4ecc4c
