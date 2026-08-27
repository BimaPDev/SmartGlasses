; FUN_2c504e4c @ 0x2c504e4c size=36
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x10]
  cbz r0,0x2c504e5a
  movs r1,#0x1
  bl 0x2c606a28
  ldr r0,[r4,#0x14]
  cbz r0,0x2c504e64
  movs r1,#0x1
  bl 0x2c606a28
  movs r1,#0x1
  pop.w {r4,lr}
  mov r0,r1
  b.w 0x2c63dc4c
