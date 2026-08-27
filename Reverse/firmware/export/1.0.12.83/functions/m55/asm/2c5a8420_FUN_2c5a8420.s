; FUN_2c5a8420 @ 0x2c5a8420 size=30
  mov r3,r0
  ldr r2,[0x2c5a8440]
  push {r4,lr}
  str r2,[r0,#0x0]
  mov r4,r0
  ldr.w r1,[r3,#0x8]!
  adds r3,#0x8
  cmp r1,r3
  beq 0x2c5a843a
  movs r0,#0x0
  bl 0x2c472680
  mov r0,r4
  pop {r4,pc}
