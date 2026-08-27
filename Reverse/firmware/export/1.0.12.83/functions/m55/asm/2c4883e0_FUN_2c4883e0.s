; FUN_2c4883e0 @ 0x2c4883e0 size=34
  push {r4,lr}
  ldr r0,[r1,#0x8]
  bl 0x2c6684cc
  mov r4,r0
  ldr r0,[0x2c488408]
  bl 0x2c648600
  uxtb r0,r4
  bl 0x2c48925c
  mov r1,r0
  ldr r0,[0x2c48840c]
  pop.w {r4,lr}
  b.w 0x2c648600
