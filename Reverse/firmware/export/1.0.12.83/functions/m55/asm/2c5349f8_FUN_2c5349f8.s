; FUN_2c5349f8 @ 0x2c5349f8 size=36
  push {r4,lr}
  ldr r3,[0x2c534a20]
  mov r4,r0
  ldr r1,[r0,#0x14]
  str r3,[r0,#0x0]
  cbz r1,0x2c534a0a
  movs r0,#0x0
  bl 0x2c472680
  ldr r1,[r4,#0x8]
  cbz r1,0x2c534a14
  movs r0,#0x0
  bl 0x2c472680
  mov r1,r4
  movs r0,#0x0
  bl 0x2c472680
