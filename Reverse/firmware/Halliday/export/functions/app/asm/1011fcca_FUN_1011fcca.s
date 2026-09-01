; FUN_1011fcca @ 0x1011fcca size=24
  push {r3,r4,r5,lr}
  mov r4,r1
  ldr r5,[r0,#0x10]
  bl 0x1011a8f2
  ldrb.w r3,[r5,#0x46]
  str r0,[r4,#0x4]
  strh r3,[r4,#0x2]
  movs r3,#0x1
  strh r3,[r4,#0x0]
  pop {r3,r4,r5,pc}
