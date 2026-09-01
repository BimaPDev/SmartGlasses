; FUN_10101070 @ 0x10101070 size=22
  push {r4,lr}
  ldr r1,[r0,#0x0]
  mov r4,r0
  ldr r0,[r0,#0x1c]
  bl 0x100fb5cc
  movs r3,#0x0
  strd r3,r3,[r4,#0x0]
  str r3,[r4,#0x18]
  pop {r4,pc}
