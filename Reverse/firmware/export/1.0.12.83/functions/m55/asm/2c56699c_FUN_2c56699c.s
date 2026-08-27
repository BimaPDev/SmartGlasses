; FUN_2c56699c @ 0x2c56699c size=28
  push {r4,lr}
  add.w r3,r0,#0x14
  ldr r1,[r0,#0xc]
  ldr r2,[0x2c5669b8]
  mov r4,r0
  cmp r1,r3
  str r2,[r0,#0x0]
  beq 0x2c5669b4
  movs r0,#0x0
  bl 0x2c472680
  mov r0,r4
  pop {r4,pc}
