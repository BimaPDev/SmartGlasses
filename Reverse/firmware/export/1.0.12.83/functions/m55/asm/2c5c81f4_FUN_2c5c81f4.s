; FUN_2c5c81f4 @ 0x2c5c81f4 size=40
  push {r4,lr}
  add.w r3,r0,#0x2c
  ldr r1,[r0,#0x24]
  ldr r2,[0x2c5c8220]
  mov r4,r0
  cmp r1,r3
  str r2,[r0,#0x0]
  beq 0x2c5c820c
  movs r0,#0x0
  bl 0x2c472680
  ldr r1,[0x2c5c8224]
  mov r0,r4
  bl 0x2c5ce06c
  mov r1,r4
  movs r0,#0x0
  bl 0x2c472680
