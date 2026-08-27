; FUN_2c651a9c @ 0x2c651a9c size=36
  ldr r3,[0x2c651ac0]
  push {r4,lr}
  mov r4,r0
  str.w r3,[r0],#0x8
  bl 0x2c6657b0
  ldrb r3,[r4,#0xc]
  cbz r3,0x2c651ab6
  ldr r0,[r4,#0x18]
  cbz r0,0x2c651ab6
  bl 0x2c64c9d2
  mov r0,r4
  bl 0x2c64cdcc
  mov r0,r4
  pop {r4,pc}
