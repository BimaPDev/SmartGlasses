; FUN_2c5f1360 @ 0x2c5f1360 size=40
  push {r3,r4,r5,lr}
  mov r3,r0
  mov r5,r1
  ldr r0,[0x2c5f1388]
  mov r1,r3
  bl 0x2c5fefc8
  mov r4,r0
  bl 0x2c5ff0b8
  movs r3,#0x2
  str r5,[r4,#0x28]
  strb.w r3,[r4,#0x25]
  ldr r0,[0x2c5f138c]
  bl 0x2c5e2e58
  str r0,[r4,#0x2c]
  mov r0,r4
  pop {r3,r4,r5,pc}
