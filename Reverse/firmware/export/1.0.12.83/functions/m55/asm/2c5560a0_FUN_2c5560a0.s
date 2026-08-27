; FUN_2c5560a0 @ 0x2c5560a0 size=34
  push {r4,lr}
  ldr r3,[r0,#0x0]
  ldr r2,[0x2c5560c4]
  ldr.w r3,[r3,#-0x14]
  adds r4,r0,r3
  str r2,[r0,r3]
  add.w r3,r4,#0xc
  ldr r1,[r4,#0x4]
  cmp r1,r3
  beq 0x2c5560be
  movs r0,#0x0
  bl 0x2c472680
  mov r0,r4
  pop {r4,pc}
