; FUN_1012782e @ 0x1012782e size=26
  push {r4,lr}
  movs r2,#0x14
  movs r1,#0x0
  mov r4,r0
  bl 0x1011ea48
  movs r3,#0x1
  str r3,[r4,#0x4]
  movs r3,#0xff
  strb r3,[r4,#0x10]
  movs r3,#0x0
  strh r3,[r4,#0x0]
  pop {r4,pc}
