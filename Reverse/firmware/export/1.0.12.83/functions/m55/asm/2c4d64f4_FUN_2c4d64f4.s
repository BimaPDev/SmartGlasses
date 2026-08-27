; FUN_2c4d64f4 @ 0x2c4d64f4 size=50
  push {r3,r4,r5,lr}
  mov.w r2,#0x118
  movs r1,#0x0
  mov r4,r0
  movs r5,#0xf
  bl 0x2c674268
  movw r3,#0xffff
  movs r2,#0xd1
  movs r1,#0x0
  add.w r0,r4,#0x20
  strb.w r5,[r4,#0x10f]
  strh.w r3,[r4,#0xf2]
  strb.w r3,[r4,#0x109]
  bl 0x2c674268
  strb.w r5,[r4,#0x22]
  pop {r3,r4,r5,pc}
