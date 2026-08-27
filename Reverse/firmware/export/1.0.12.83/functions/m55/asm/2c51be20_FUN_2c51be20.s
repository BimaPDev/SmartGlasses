; FUN_2c51be20 @ 0x2c51be20 size=30
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0xc]
  cbz r0,0x2c51be30
  bl 0x2c6043d8
  movs r3,#0x0
  str r3,[r4,#0xc]
  ldr r0,[r4,#0x10]
  cbz r0,0x2c51be3c
  bl 0x2c6043d8
  movs r3,#0x0
  str r3,[r4,#0x10]
  pop {r4,pc}
