; FUN_2c5491dc @ 0x2c5491dc size=22
  push {r4,lr}
  ldr r3,[0x2c5491f4]
  mov r4,r0
  ldr r1,[r0,#0x4]
  str r3,[r0,#0x0]
  cbz r1,0x2c5491ee
  movs r0,#0x0
  bl 0x2c472680
  mov r0,r4
  pop {r4,pc}
