; FUN_2c5f031c @ 0x2c5f031c size=38
  push {r4,lr}
  mov r1,r0
  ldr r0,[0x2c5f0344]
  bl 0x2c5fefc8
  mov r4,r0
  bl 0x2c5ff0b8
  movs r3,#0x0
  movs r1,#0x1
  mov r0,r4
  strd r3,r3,[r4,#0x28]
  strb.w r1,[r4,#0x25]
  bl 0x2c627e28
  mov r0,r4
  pop {r4,pc}
