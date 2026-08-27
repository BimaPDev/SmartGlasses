; FUN_2c5d3510 @ 0x2c5d3510 size=38
  push {r4,lr}
  ldr r4,[r0,#0xc]
  cbz r4,0x2c5d3528
  ldr r1,[r4,#0x6c]
  mov r0,r4
  bl 0x2c5d3494
  bl 0x2c5c685c
  bl 0x2c5c6d5c
  cbz r0,0x2c5d352a
  pop {r4,pc}
  ldr r0,[r4,#0x6c]
  movs r1,#0x1
  pop.w {r4,lr}
  b.w 0x2c606abc
