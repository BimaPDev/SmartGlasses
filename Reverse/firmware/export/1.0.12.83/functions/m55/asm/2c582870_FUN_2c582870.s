; FUN_2c582870 @ 0x2c582870 size=26
  push {r4,lr}
  ldr r3,[0x2c582890]
  mov r4,r0
  ldr r0,[r0,#0x4]
  str r3,[r4,#0x0]
  cbz r0,0x2c582882
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0xc]
  blx r3
  mov r1,r4
  movs r0,#0x0
  bl 0x2c472680
