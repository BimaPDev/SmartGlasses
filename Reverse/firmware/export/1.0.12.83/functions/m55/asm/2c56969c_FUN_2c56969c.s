; FUN_2c56969c @ 0x2c56969c size=32
  push {r4,lr}
  add.w r3,r0,#0x14
  ldr r1,[r0,#0xc]
  ldr r2,[0x2c5696c0]
  mov r4,r0
  cmp r1,r3
  str r2,[r0,#0x0]
  beq 0x2c5696b4
  movs r0,#0x0
  bl 0x2c472680
  mov r1,r4
  movs r0,#0x0
  bl 0x2c472680
