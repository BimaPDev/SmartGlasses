; FUN_2c490d3c @ 0x2c490d3c size=26
  push {r3,lr}
  bl 0x2c5edb40
  cbz r0,0x2c490d4a
  bl 0x2c5ef874
  cbnz r0,0x2c490d52
  pop.w {r3,lr}
  b.w 0x2c5e1150
  movs r0,#0x1
  pop {r3,pc}
