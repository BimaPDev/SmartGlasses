; FUN_2c571b00 @ 0x2c571b00 size=32
  push {r4,lr}
  add.w r3,r0,#0x24
  ldr r1,[r0,#0x1c]
  ldr r2,[0x2c571b24]
  mov r4,r0
  cmp r1,r3
  str r2,[r0,#0x0]
  beq 0x2c571b18
  movs r0,#0x0
  bl 0x2c472680
  mov r1,r4
  movs r0,#0x0
  bl 0x2c472680
