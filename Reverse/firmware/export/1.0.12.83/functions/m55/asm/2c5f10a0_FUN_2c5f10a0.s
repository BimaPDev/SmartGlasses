; FUN_2c5f10a0 @ 0x2c5f10a0 size=42
  push {r3,r4,r5,lr}
  mov r3,r0
  mov r5,r1
  ldr r0,[0x2c5f10cc]
  mov r1,r3
  bl 0x2c5fefc8
  mov r4,r0
  bl 0x2c5ff0b8
  movs r1,#0x1
  mov r0,r4
  bl 0x2c627e28
  mov r0,r4
  mov r1,r5
  strh r5,[r4,#0x28]
  bl 0x2c6070bc
  mov r0,r4
  pop {r3,r4,r5,pc}
