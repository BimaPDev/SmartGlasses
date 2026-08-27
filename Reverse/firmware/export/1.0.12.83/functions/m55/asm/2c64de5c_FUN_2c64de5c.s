; FUN_2c64de5c @ 0x2c64de5c size=28
  ldr r3,[0x2c64de78]
  push {r4,lr}
  mov r4,r0
  str r3,[r0,#0x0]
  ldr r0,[r0,#0x8]
  cbz r0,0x2c64de6e
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x4]
  blx r3
  mov r0,r4
  bl 0x2c64cdcc
  mov r0,r4
  pop {r4,pc}
