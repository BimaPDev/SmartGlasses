; FUN_2c48fe9c @ 0x2c48fe9c size=22
  push {r3,lr}
  ldr r1,[0x2c48feb4]
  movs r0,#0x2
  bl 0x2c492880
  cbz r0,0x2c48feb0
  ldr r2,[0x2c48feb8]
  ldr r3,[r2,#0x0]
  adds r3,#0x1
  str r3,[r2,#0x0]
  pop {r3,pc}
