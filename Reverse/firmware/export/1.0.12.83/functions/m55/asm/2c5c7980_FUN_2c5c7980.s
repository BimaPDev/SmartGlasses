; FUN_2c5c7980 @ 0x2c5c7980 size=46
  push {r4,lr}
  mov r4,r0
  movs r1,#0x1
  bl 0x2c5dee88
  movs r1,#0x1
  mov r0,r4
  bl 0x2c5dee30
  mov r0,r4
  ldr r3,[0x2c5c79a4]
  mov.w r2,#0x1f4
  movs r1,#0xb
  pop.w {r4,lr}
  b.w 0x2c5def04
  strb.w r1,[r0,#0x28]
  strh r2,[r0,#0x2a]
  str r3,[r0,#0x2c]
  bx lr
