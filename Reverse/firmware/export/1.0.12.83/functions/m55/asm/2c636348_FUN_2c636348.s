; FUN_2c636348 @ 0x2c636348 size=26
  push {r3,r4,r5,lr}
  ldrb.w r3,[r1,#0x28]
  ands r5,r3,#0x1
  beq 0x2c636356
  pop {r3,r4,r5,pc}
  mov r4,r1
  ldr r0,[r1,#0x24]
  bl 0x2c62bea8
  str r5,[r4,#0x24]
  pop {r3,r4,r5,pc}
