; FUN_2c51f2bc @ 0x2c51f2bc size=42
  push {r3,r4,r5,lr}
  mov r4,r0
  movs r5,#0x0
  ldr r0,[r0,#0xc]
  strb r5,[r4,#0x1c]
  bl 0x2c6043d8
  ldr r0,[r4,#0x10]
  str r5,[r4,#0xc]
  bl 0x2c6043d8
  ldr r0,[r4,#0x18]
  str r5,[r4,#0x10]
  bl 0x2c6043d8
  ldr r0,[r4,#0x14]
  str r5,[r4,#0x18]
  bl 0x2c6043d8
  str r5,[r4,#0x14]
  pop {r3,r4,r5,pc}
