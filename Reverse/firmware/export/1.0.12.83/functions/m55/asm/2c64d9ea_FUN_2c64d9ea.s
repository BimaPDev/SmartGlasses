; FUN_2c64d9ea @ 0x2c64d9ea size=26
  push {r4,lr}
  mov r4,r0
  str r3,[r0,#0x0]
  ldr r0,[r0,#0x8]
  cbz r0,0x2c64d9fa
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x4]
  blx r3
  mov r0,r4
  bl 0x2c64cdcc
  mov r0,r4
  pop {r4,pc}
