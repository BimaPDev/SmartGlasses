; FUN_2c636000 @ 0x2c636000 size=50
  push {r4,lr}
  mov r4,r1
  ldr r2,[0x2c636034]
  movs r1,#0x2
  ldrb.w r3,[r4,#0x28]
  mov r0,r4
  str r2,[r4,#0x24]
  orr r3,r3,#0x1
  strb.w r3,[r4,#0x28]
  bl 0x2c606a28
  mov r0,r4
  movs r1,#0x8
  bl 0x2c606a28
  mov r0,r4
  mov.w r1,#0x400
  pop.w {r4,lr}
  b.w 0x2c606a28
