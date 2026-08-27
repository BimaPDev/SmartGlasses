; FUN_2c5d5cd0 @ 0x2c5d5cd0 size=18
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x8]
  cbz r0,0x2c5d5ce0
  bl 0x2c6043d8
  movs r3,#0x0
  str r3,[r4,#0x8]
  pop {r4,pc}
