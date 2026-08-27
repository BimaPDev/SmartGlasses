; FUN_2c5dc814 @ 0x2c5dc814 size=18
  push {r4,lr}
  ldr r1,[r0,#0x0]
  mov r4,r0
  cbz r1,0x2c5dc822
  movs r0,#0x0
  bl 0x2c472680
  mov r0,r4
  pop {r4,pc}
