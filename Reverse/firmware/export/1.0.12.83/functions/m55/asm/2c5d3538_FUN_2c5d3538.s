; FUN_2c5d3538 @ 0x2c5d3538 size=48
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x44]
  cbz r0,0x2c5d3550
  strb.w r1,[r4,#0x4c]
  cbz r1,0x2c5d3552
  bl 0x2c5c685c
  bl 0x2c5c6d5c
  cbz r0,0x2c5d355c
  pop {r4,pc}
  movs r1,#0x1
  pop.w {r4,lr}
  b.w 0x2c606a28
  ldr r0,[r4,#0x44]
  movs r1,#0x1
  pop.w {r4,lr}
  b.w 0x2c606abc
