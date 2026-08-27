; FUN_2c507cc0 @ 0x2c507cc0 size=14
  push {r3,lr}
  bl 0x2c602414
  cbz r0,0x2c507ccc
  movs r3,#0x0
  strb r3,[r0,#0x14]
  pop {r3,pc}
