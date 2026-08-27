; FUN_2c5048c4 @ 0x2c5048c4 size=26
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x0]
  bl 0x2c5eda50
  movs r0,#0x0
  ldr r1,[r4,#0x8]
  strb r0,[r4,#0x4]
  cbz r1,0x2c5048da
  bl 0x2c472680
  mov r0,r4
  pop {r4,pc}
