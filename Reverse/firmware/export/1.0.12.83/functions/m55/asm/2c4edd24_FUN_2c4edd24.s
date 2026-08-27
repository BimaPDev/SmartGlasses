; FUN_2c4edd24 @ 0x2c4edd24 size=32
  push {r4,lr}
  mov r4,r0
  bl 0x2c4ee01c
  mov r3,r0
  mov r0,r4
  ldr r3,[r3,#0x0]
  blx r3
  movs r3,#0x0
  ldr r0,[0x2c4edd44]
  ldr r1,[0x2c4edd48]
  ldr r2,[0x2c4edd4c]
  str r4,[r0,#0x0]
  strb r3,[r1,#0x0]
  strb r3,[r2,#0x0]
  pop {r4,pc}
