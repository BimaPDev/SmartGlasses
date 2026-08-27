; FUN_2c5fec44 @ 0x2c5fec44 size=24
  push {r4,lr}
  ldr r4,[0x2c5fec5c]
  movs r1,#0x32
  ldr r0,[0x2c5fec60]
  mov r2,r4
  bl 0x2c62bdd8
  str r0,[r4,#0x0]
  bl 0x2c5fd09c
  str r0,[r4,#0x4]
  pop {r4,pc}
