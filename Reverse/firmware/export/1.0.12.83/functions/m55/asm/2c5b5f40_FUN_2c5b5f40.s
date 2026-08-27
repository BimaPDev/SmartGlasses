; FUN_2c5b5f40 @ 0x2c5b5f40 size=26
  push {r4,lr}
  ldr r3,[0x2c5b5f60]
  mov r4,r0
  ldr r1,[r0,#0x4]
  str r3,[r0,#0x0]
  cbz r1,0x2c5b5f52
  movs r0,#0x0
  bl 0x2c472680
  mov r1,r4
  movs r0,#0x0
  bl 0x2c472680
