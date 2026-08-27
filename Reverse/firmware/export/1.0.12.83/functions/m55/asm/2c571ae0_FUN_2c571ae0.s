; FUN_2c571ae0 @ 0x2c571ae0 size=28
  push {r4,lr}
  add.w r3,r0,#0x24
  ldr r1,[r0,#0x1c]
  ldr r2,[0x2c571afc]
  mov r4,r0
  cmp r1,r3
  str r2,[r0,#0x0]
  beq 0x2c571af8
  movs r0,#0x0
  bl 0x2c472680
  mov r0,r4
  pop {r4,pc}
