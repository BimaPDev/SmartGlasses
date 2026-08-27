; FUN_2c6444d2 @ 0x2c6444d2 size=36
  push {r4,lr}
  mov r1,r0
  mov r4,r0
  movs r0,#0x13
  bl 0x2c645ea4
  cbnz r0,0x2c6444ec
  ldr r3,[0x2c6444f8]
  ldr r0,[r3,#0x14]
  bl 0x2c643ad4
  movs r0,#0x0
  pop {r4,pc}
  mov r0,r4
  bl 0x2c643ad0
  movs r0,#0x0
  pop {r4,pc}
