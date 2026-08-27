; FUN_2c503b16 @ 0x2c503b16 size=32
  push {r4,lr}
  strb r1,[r0,#0x10]
  mov r4,r0
  strb r3,[r0,#0x18]
  strh r3,[r0,#0x1a]
  str r2,[r0,#0x0]
  strd r3,r3,[r0,#0x30]
  bl 0x2c629df4
  movs r3,#0xff
  mov r2,r0
  mov r0,r4
  strd r2,r3,[r4,#0x38]
  pop {r4,pc}
