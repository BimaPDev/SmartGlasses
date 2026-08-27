; FUN_2c64cebc @ 0x2c64cebc size=22
  ldr r3,[0x2c64ced4]
  push {r4,lr}
  ldr r3,[r3,#0x0]
  mov r4,r0
  ldr r0,[r0,#0x0]
  cmp r0,r3
  beq 0x2c64cece
  bl 0x2c64ce9e
  mov r0,r4
  pop {r4,pc}
