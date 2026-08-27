; FUN_2c50d8e0 @ 0x2c50d8e0 size=36
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x10]
  cbz r0,0x2c50d8ee
  movs r1,#0x1
  bl 0x2c606a28
  ldr r0,[r4,#0x14]
  cbz r0,0x2c50d8f8
  movs r1,#0x1
  bl 0x2c606a28
  movs r1,#0x1
  pop.w {r4,lr}
  mov r0,r1
  b.w 0x2c63f744
