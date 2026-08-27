; FUN_2c5560f0 @ 0x2c5560f0 size=38
  push {r4,lr}
  ldr r3,[r0,#0x0]
  ldr r2,[0x2c55611c]
  ldr.w r3,[r3,#-0x14]
  adds r4,r0,r3
  str r2,[r0,r3]
  add.w r3,r4,#0xc
  ldr r1,[r4,#0x4]
  cmp r1,r3
  beq 0x2c55610e
  movs r0,#0x0
  bl 0x2c472680
  mov r1,r4
  movs r0,#0x0
  bl 0x2c472680
