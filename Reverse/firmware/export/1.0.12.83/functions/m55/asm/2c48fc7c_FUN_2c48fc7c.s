; FUN_2c48fc7c @ 0x2c48fc7c size=32
  push {r4,lr}
  ldr r4,[0x2c48fc9c]
  ldr r3,[r4,#0x0]
  cbz r3,0x2c48fc92
  movs r1,#0x0
  ldr r0,[0x2c48fca0]
  bl 0x2c6440f0
  ldr r3,[0x2c48fca4]
  str r0,[r3,#0x0]
  pop {r4,pc}
  ldr r0,[0x2c48fca8]
  bl 0x2c64419c
  str r0,[r4,#0x0]
  b 0x2c48fc84
