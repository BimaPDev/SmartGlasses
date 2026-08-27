; FUN_2c50e0e0 @ 0x2c50e0e0 size=30
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x10]
  bl 0x2c6043d8
  ldr r0,[r4,#0x14]
  bl 0x2c6043d8
  movs r3,#0x0
  strd r3,r3,[r4,#0x10]
  strd r3,r3,[r4,#0x18]
  str r3,[r4,#0x20]
  pop {r4,pc}
