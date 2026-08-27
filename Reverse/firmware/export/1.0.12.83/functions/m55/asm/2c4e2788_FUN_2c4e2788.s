; FUN_2c4e2788 @ 0x2c4e2788 size=22
  push {r3,r4,r5,lr}
  mov r4,r0
  mov r5,r1
  bl 0x2c4db1cc
  movs r3,#0x0
  strd r0,r5,[r4,#0x0]
  str r3,[r4,#0x8]
  mov r0,r4
  pop {r3,r4,r5,pc}
