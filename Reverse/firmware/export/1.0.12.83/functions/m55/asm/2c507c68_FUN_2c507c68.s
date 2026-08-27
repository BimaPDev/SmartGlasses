; FUN_2c507c68 @ 0x2c507c68 size=40
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x18]
  bl 0x2c6043d8
  ldr r0,[r4,#0x1c]
  bl 0x2c6043d8
  ldr r0,[r4,#0x20]
  bl 0x2c6043d8
  ldr r0,[r4,#0x24]
  bl 0x2c6043d8
  movs r3,#0x0
  strd r3,r3,[r4,#0x18]
  strd r3,r3,[r4,#0x20]
  pop {r4,pc}
