; FUN_2c5b5f24 @ 0x2c5b5f24 size=22
  push {r4,lr}
  ldr r3,[0x2c5b5f3c]
  mov r4,r0
  ldr r1,[r0,#0x4]
  str r3,[r0,#0x0]
  cbz r1,0x2c5b5f36
  movs r0,#0x0
  bl 0x2c472680
  mov r0,r4
  pop {r4,pc}
