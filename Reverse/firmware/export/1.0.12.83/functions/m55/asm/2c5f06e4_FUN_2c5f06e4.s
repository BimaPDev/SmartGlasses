; FUN_2c5f06e4 @ 0x2c5f06e4 size=34
  push {r4,lr}
  mov r1,r0
  ldr r0,[0x2c5f0708]
  bl 0x2c5fefc8
  mov r4,r0
  bl 0x2c5ff0b8
  movs r1,#0x1
  mov r0,r4
  bl 0x2c627e28
  movs r3,#0x6
  mov r0,r4
  strb.w r3,[r4,#0x25]
  pop {r4,pc}
