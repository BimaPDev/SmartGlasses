; FUN_2c4e4ace @ 0x2c4e4ace size=36
  push {r4,lr}
  str r3,[r0,#0x0]
  adds r3,#0x3c
  mov r4,r0
  str r3,[r0,#0x20]
  ldr r3,[r0,#0x30]
  cbz r3,0x2c4e4ae0
  bl 0x2c4e45b0
  ldr r3,[0x2c4e4af8]
  mov r0,r4
  str r3,[r4,#0x0]
  adds r3,#0x3c
  str r3,[r4,#0x20]
  bl 0x2c4dfb24
  mov r0,r4
  pop {r4,pc}
