; FUN_2c60272c @ 0x2c60272c size=40
  push {r3,lr}
  cbz r0,0x2c60273e
  bl 0x2c604188
  bl 0x2c5feea8
  cbz r0,0x2c60274a
  ldr r0,[r0,#0x10]
  pop {r3,pc}
  bl 0x2c62a470
  bl 0x2c5feea8
  cmp r0,#0x0
  bne 0x2c60273a
  movs r0,#0x11
  pop.w {r3,lr}
  b.w 0x2c62ee64
