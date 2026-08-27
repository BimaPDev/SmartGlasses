; FUN_2c505134 @ 0x2c505134 size=40
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x20]
  bl 0x2c6043d8
  ldr r0,[r4,#0x78]
  bl 0x2c6043d8
  ldr r0,[r4,#0x7c]
  bl 0x2c6043d8
  ldr r0,[r4,#0x2c]
  bl 0x2c6043d8
  movs r3,#0x0
  str r3,[r4,#0x78]
  str r3,[r4,#0x20]
  str r3,[r4,#0x7c]
  str r3,[r4,#0x2c]
  pop {r4,pc}
