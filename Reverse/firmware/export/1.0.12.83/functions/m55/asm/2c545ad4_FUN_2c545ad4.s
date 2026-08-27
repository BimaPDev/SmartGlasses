; FUN_2c545ad4 @ 0x2c545ad4 size=30
  push {r4,lr}
  str r2,[r0,#0x0]
  mov r4,r0
  ldr.w r1,[r3,#0x8]!
  adds r3,#0x8
  cmp r1,r3
  beq 0x2c545aea
  movs r0,#0x0
  bl 0x2c472680
  mov r1,r4
  movs r0,#0x0
  bl 0x2c472680
