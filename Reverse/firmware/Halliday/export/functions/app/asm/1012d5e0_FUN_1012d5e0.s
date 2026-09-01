; FUN_1012d5e0 @ 0x1012d5e0 size=36
  push {r4,lr}
  ldr r4,[r0,#0x4]
  ldrb r3,[r4,#0x0]
  ands r2,r3,#0x1
  beq 0x1012d5f6
  ldr r0,[r0,#0x8]
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  pop {r4,pc}
  orr r3,r3,#0x1
  mov r1,r2
  strb r3,[r4,#0x0]
  bl 0x1009fa38
  b 0x1012d5ee
