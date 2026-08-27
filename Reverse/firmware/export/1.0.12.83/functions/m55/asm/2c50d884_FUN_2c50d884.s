; FUN_2c50d884 @ 0x2c50d884 size=24
  push {r4,lr}
  mov r4,r0
  str r2,[r0,#0x0]
  strd r3,r3,[r0,#0x10]
  bl 0x2c5068ac
  mov r0,r4
  bl 0x2c62bea8
  mov r0,r4
  pop {r4,pc}
