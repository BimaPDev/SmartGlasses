; FUN_2c5f07b0 @ 0x2c5f07b0 size=30
  push {r4,lr}
  bl 0x2c5f0544
  mov r1,r0
  ldr r0,[0x2c5f07d0]
  bl 0x2c5fefc8
  mov r4,r0
  bl 0x2c5ff0b8
  movs r3,#0x3
  mov r0,r4
  strb.w r3,[r4,#0x25]
  pop {r4,pc}
