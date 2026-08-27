; FUN_2c5f1014 @ 0x2c5f1014 size=38
  push {r4,lr}
  mov r1,r0
  ldr r0,[0x2c5f103c]
  bl 0x2c5fefc8
  mov r4,r0
  bl 0x2c5ff0b8
  movs r1,#0x1
  mov r0,r4
  bl 0x2c627e28
  movs r2,#0x1
  movs r3,#0x5
  mov r0,r4
  str r2,[r4,#0x28]
  strb.w r3,[r4,#0x25]
  pop {r4,pc}
