; FUN_2c516690 @ 0x2c516690 size=44
  push {r4,lr}
  movs r1,#0x1
  mov r4,r0
  ldr r0,[r0,#0x8]
  bl 0x2c606b94
  cbz r0,0x2c5166a0
  pop {r4,pc}
  ldr r0,[r4,#0x8]
  movs r1,#0x1
  bl 0x2c606a28
  ldr r0,[r4,#0x4]
  movs r1,#0x1
  bl 0x2c606abc
  ldr r0,[r4,#0x54]
  movs r1,#0x1
  pop.w {r4,lr}
  b.w 0x2c606abc
