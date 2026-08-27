; FUN_2c5551f0 @ 0x2c5551f0 size=36
  push {r4,lr}
  ldr r3,[r0,#0x0]
  ldr r2,[0x2c555214]
  ldr.w r3,[r3,#-0x14]
  adds r4,r0,r3
  str r2,[r0,r3]
  mov r3,r4
  ldr.w r1,[r3,#0x8]!
  adds r3,#0x8
  cmp r1,r3
  beq 0x2c555210
  movs r0,#0x0
  bl 0x2c472680
  mov r0,r4
  pop {r4,pc}
