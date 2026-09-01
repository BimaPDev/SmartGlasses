; FUN_1012d5be @ 0x1012d5be size=34
  push {r4,lr}
  ldr r4,[r0,#0x4]
  ldrb r3,[r4,#0x0]
  ands r1,r3,#0x2
  beq 0x1012d5d4
  ldr r0,[r0,#0x8]
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  pop {r4,pc}
  orr r3,r3,#0x2
  strb r3,[r4,#0x0]
  bl 0x1009f98c
  b 0x1012d5cc
