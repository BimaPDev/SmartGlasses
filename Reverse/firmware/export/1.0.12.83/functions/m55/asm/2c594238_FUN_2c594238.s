; FUN_2c594238 @ 0x2c594238 size=18
  push {r4,lr}
  ldr r1,[r0,#0x0]
  mov r4,r0
  cbz r1,0x2c594246
  movs r0,#0x0
  bl 0x2c472680
  mov r0,r4
  pop {r4,pc}
