; FUN_2c51683c @ 0x2c51683c size=28
  push {r4,lr}
  mov r4,r0
  mov r0,r1
  bl 0x2c602618
  cmp r0,#0xd2
  beq 0x2c51684c
  pop {r4,pc}
  mov r0,r4
  movs r1,#0x1
  pop.w {r4,lr}
  b.w 0x2c5167b8
