; FUN_2c53c0f0 @ 0x2c53c0f0 size=30
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x14]
  cbz r0,0x2c53c100
  bl 0x2c6043d8
  movs r3,#0x0
  str r3,[r4,#0x14]
  ldr r0,[r4,#0x18]
  cbz r0,0x2c53c10c
  bl 0x2c6043d8
  movs r3,#0x0
  str r3,[r4,#0x18]
  pop {r4,pc}
