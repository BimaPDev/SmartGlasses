; FUN_2c64ce10 @ 0x2c64ce10 size=16
  push {r4,lr}
  ldr r4,[0x2c64ce20]
  ldr r3,[r4,#0x0]
  cbnz r3,0x2c64ce1c
  bl 0x2c64cdfc
  ldr r0,[r4,#0x0]
  pop {r4,pc}
