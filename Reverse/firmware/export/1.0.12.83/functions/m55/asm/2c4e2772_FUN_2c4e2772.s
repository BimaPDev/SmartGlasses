; FUN_2c4e2772 @ 0x2c4e2772 size=22
  push {r4,lr}
  add.w r1,r0,#0x28
  mov r4,r0
  bl 0x2c4de692
  movs r3,#0x0
  strd r3,r3,[r4,#0x30]
  str r3,[r4,#0x2c]
  pop {r4,pc}
