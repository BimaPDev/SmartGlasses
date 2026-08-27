; FUN_2c5349d4 @ 0x2c5349d4 size=32
  push {r4,lr}
  ldr r3,[0x2c5349f4]
  mov r4,r0
  ldr r1,[r0,#0x14]
  str r3,[r0,#0x0]
  cbz r1,0x2c5349e6
  movs r0,#0x0
  bl 0x2c472680
  ldr r1,[r4,#0x8]
  cbz r1,0x2c5349f0
  movs r0,#0x0
  bl 0x2c472680
  mov r0,r4
  pop {r4,pc}
