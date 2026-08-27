; FUN_2c4d0cf8 @ 0x2c4d0cf8 size=40
  push {r3,r4,r5,lr}
  movs r5,#0x0
  mov r4,r1
  str r1,[r0,#0x0]
  movs r2,#0x80
  mov r1,r5
  strb.w r5,[r0,#0x88]
  str.w r5,[r0,#0x84]
  adds r0,#0x4
  bl 0x2c674268
  mov r1,r5
  mov r0,r4
  movs r2,#0x80
  pop.w {r3,r4,r5,lr}
  b.w 0x2c674268
