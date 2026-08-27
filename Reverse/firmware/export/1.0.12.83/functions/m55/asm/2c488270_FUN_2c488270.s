; FUN_2c488270 @ 0x2c488270 size=40
  push {r4,lr}
  ldr r0,[r1,#0x8]
  bl 0x2c6684cc
  mov r4,r0
  ldr r1,[0x2c488298]
  mov r2,r4
  ldr r0,[0x2c48829c]
  bl 0x2c648600
  subs r0,r4,#0x0
  pop.w {r4,lr}
  it ne
  mov.ne r0,#0x1
  b.w 0x2c48a87c
  ldr r3,[0x2c48a884]
  strb r0,[r3,#0x0]
  bx lr
