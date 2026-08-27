; FUN_2c626cf4 @ 0x2c626cf4 size=26
  push {r4,r5,r6,lr}
  mov r6,r1
  mov r1,r3
  mov r5,r2
  bl 0x2c5fefc8
  mov r4,r0
  bl 0x2c5ff0b8
  mov r0,r4
  strd r6,r5,[r4,#0x78]
  pop {r4,r5,r6,pc}
