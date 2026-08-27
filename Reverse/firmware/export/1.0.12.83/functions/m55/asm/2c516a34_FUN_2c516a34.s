; FUN_2c516a34 @ 0x2c516a34 size=28
  push {r4,lr}
  ldr r4,[r0,#0xc]
  movs r1,#0x1
  mov r0,r4
  bl 0x2c606b94
  cbz r0,0x2c516a44
  pop {r4,pc}
  mov r0,r4
  movs r1,#0x1
  pop.w {r4,lr}
  b.w 0x2c606a28
