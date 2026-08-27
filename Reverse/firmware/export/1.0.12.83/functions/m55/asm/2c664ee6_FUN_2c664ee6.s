; FUN_2c664ee6 @ 0x2c664ee6 size=24
  push {r3,r4,r5,lr}
  mov r5,r2
  mov r4,r3
  bl 0x2c6650f4
  cbz r0,0x2c664efc
  movs r3,#0x8
  str r5,[r4,#0x0]
  str r3,[r4,#0xc]
  movs r3,#0x6
  strb r3,[r4,#0x4]
  pop {r3,r4,r5,pc}
