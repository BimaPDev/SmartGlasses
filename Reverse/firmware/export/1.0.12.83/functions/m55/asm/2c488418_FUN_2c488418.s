; FUN_2c488418 @ 0x2c488418 size=32
  push {r4,lr}
  ldr r0,[r1,#0x8]
  bl 0x2c6684cc
  mov r4,r0
  uxth r0,r0
  bl 0x2c489ae4
  cbnz r0,0x2c48842c
  pop {r4,pc}
  uxth r1,r4
  ldr r0,[0x2c488440]
  pop.w {r4,lr}
  b.w 0x2c648600
